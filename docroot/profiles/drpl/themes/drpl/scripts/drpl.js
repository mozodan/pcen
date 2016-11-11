(function ($) {
  Drupal.behaviors.DRPLFooterResponsive = {
    attach: function (context, settings) {
      $(".bottom-list > section").click(function () {
        if ($(window).width() <= 767) {
          var sectionID = $(this).attr('id');
          $("#" + sectionID).toggleClass("footer_open");
          $("#" + sectionID + " div").toggleClass("footerOpened");
        }
      });
    }
  };
  Drupal.behaviors.DRPLLogoResponsive = {
    attach: function (context, settings) {
      $(document).on('ready', function () {
        headerLogo();
        $(window).on("resize", headerLogo);
      });

      function headerLogo() {
        if ($(window).width() <= 767) {
          headerLogoMobile();
        } else if ($(window).width() > 767) {
          headerLogoDesktop();
        }
      }

      function headerLogoMobile() {
        var path_theme = Drupal.settings.settings.path_theme;
        var url = path_theme + "/logo_responsive.png";
        $(".logo-page img[class='logo']").attr("src", url);
      }

      function headerLogoDesktop() {
        var path_theme = Drupal.settings.settings.path_theme;
        var url = path_theme + "/logo.png";
        $(".logo-page img[class='logo']").attr("src", url);
      }
    }
  };
  Drupal.behaviors.DRPLSecctionsToggle = {
    attach: function (context, settings) {
      //Collapsed left column to have more size to read right column.
      $(".pane-custom-drpl-paragraphs-custom-drpl-slider-menu > .pane-title").click(function () {
        var col_left_expanded = "col-md-3";
        var col_left_collapsed = "col-md-2";
        var col_right_expanded = "col-md-10";
        var col_right_collapsed = "col-md-9";
        var class_template = ".panel-twocol-15-85-stacked";
        var class_left_column = ".col-left";
        var class_right_column = ".col-right";
        $(class_template + " " + class_left_column).toggleClass("col-collapsed");
        $(class_template + " " + class_right_column).toggleClass("col-expanded");
        $(class_template + " " + class_left_column + " .pane-custom-drpl-custom-drpl-related-content").toggleClass("hide");
        $(class_template + " " + class_left_column + " .pane-custom-drpl-paragraphs-custom-drpl-slider-menu > .pane-content").toggleClass("hide");
        //Left column
        if ($(class_template + " " + class_left_column).hasClass(col_left_collapsed)) {
          $(class_template + " " + class_left_column).removeClass(col_left_collapsed);
          $(class_template + " " + class_left_column).addClass(col_left_expanded);
        } else {
          $(class_template + " " + class_left_column).removeClass(col_left_expanded);
          $(class_template + " " + class_left_column).addClass(col_left_collapsed);
        }
        //Right column
        if ($(class_template + " " + class_right_column).hasClass(col_right_collapsed)) {
          $(class_template + " " + class_right_column).removeClass(col_right_collapsed);
          $(class_template + " " + class_right_column).addClass(col_right_expanded);
        } else {
          $(class_template + " " + class_right_column).removeClass(col_right_expanded);
          $(class_template + " " + class_right_column).addClass(col_right_collapsed);
        }
      });
    }
  };
  Drupal.behaviors.DRPLStickyHeader = {
    attach: function (context, settings) {
      $(window).on("scroll", function () {
        var scroll = $(window).scrollTop();
        if (scroll >= 10) {
          $("#navbar").addClass("sticky");
        } else if (scroll < 10) {
          $("#navbar").removeClass("sticky");
        }
      });
    }
  };
  Drupal.behaviors.DRPLStickySection = {
    attach: function (context, settings) {
      $(window).on("scroll", function () {
        var heightMenu = $(".col-left .inside").height();
        var heightContent = $(".node-main-information .col-content").height();
        var totalHeight = $("body").height();
        var footer = $(".footer").height();
        var width = $(window).width();
        var maxScroll = heightContent - heightMenu;
        totalHeight = totalHeight - footer + 200;
        var scroll = $(window).scrollTop();
        var altura = $(".col-top").height();
        var heightDown = altura;
        var heightUp = altura + 120;
        footer += heightMenu;
        if (width > 991) {
          $(".node-main-information .col-left").height(heightContent);
          if (scroll >= heightDown && scroll < maxScroll - 20) {
            $(".col-left .inside").addClass("stickySection");
          } else if (scroll < heightUp) {
            $(".col-left .inside").removeClass("stickySection");
          } else if (scroll >= maxScroll + heightMenu) {
            $(".col-left .inside").removeClass("stickySection").addClass("absoluteSection");
          } else if (scroll < maxScroll + heightMenu) {
            $(".col-left .inside").removeClass("absoluteSection").addClass("stickySection");
          }
        } else {
          $(".node-main-information .col-left").height(heightMenu);
        }
        $(window).on("resize", function () {
          var width = $(window).width();
          if (width < 991) {
            $(".col-left .inside").removeClass("stickySection");
            var heightContent = $(".node-main-information .col-content").height();
            $(".node-main-information .col-left").height(heightContent + 212);
          } else {
            $(".node-main-information .col-left").height(heightMenu);
          }
        });
      });

    }
  };
  Drupal.behaviors.DRPLAgendaEventsDates = {
    attach: function (context, settings) {
      if ($(".view-goverment-agenda .view-mode-block_teaser .date-display-single").length > 0){
        $(".view-goverment-agenda .view-mode-block_teaser .date-display-single").each(function(){
          var $this = $(this);
          var date = $this.text().split('-');
          var full_day = $this.text().replace('-' + date[1],'').split(',');
          var day = full_day[1].split(" ");
          $this.closest(".field-item").append( "<div class='date-display-single'>" + day[2] + " " + day[1] + " <br/> " + full_day[0]  + "</div>" );
          $this.closest(".field-item").prepend( "<div class='time'>" + date[1] + "</div>" );
          $this.addClass("element-hidden");
        });
      }
    }
  }
})(jQuery);