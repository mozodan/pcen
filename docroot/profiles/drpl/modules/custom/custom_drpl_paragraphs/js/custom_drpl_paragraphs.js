/**
 * @file
 * Defines the behavior of the paragraphs toggle.
 */
(function ($) {
  Drupal.behaviors.DRPLParagraphsMenuScroll = {
    attach: function (context, settings) {
      if ($(".paragraph-menu-progress")[0]){
        var wrapper_top = $(".paragraph-menu-progress .wrapper").offset().top;
        $(window).scroll(function (){
          var wrapper_height = $(".paragraph-menu-progress .wrapper").height();
          var top = $(this).scrollTop();
          if (top > wrapper_top - 10) {
            $(".paragraph-menu-progress .wrapper").addClass("affix");
          }
          else {
            $(".paragraph-menu-progress .wrapper").removeClass("affix");
          }
          $(".col-content .anchor_link").each(function(i){
            var this_top = $(this).offset().top;
            var height = $(this).height();
            var this_bottom = this_top + height;
            var percent = 0;
            if (top >= this_top && top <= this_bottom) {
              percent = ((top - this_top) / (height - wrapper_height)) * 100;
              if (percent >= 100) { 
                percent = 100; 
                $(".paragraph-menu-progress .wrapper .bar:eq("+i+") i").css("color", "#DB1F16");
              }
              else {
                $(".paragraph-menu-progress .wrapper .bar:eq("+i+") i").css("color", "#36a7f3");                     
              }
            }
            else if (top > this_bottom) {
              percent = 100;
              $(".paragraph-menu-progress .wrapper .bar:eq("+i+") i").css("color", "#DB1F16");
            }
            $(".paragraph-menu-progress .wrapper .bar:eq("+i+") span").css("width", percent + "%");
          });
        });
        // Smooth Scroll Links
        $(".paragraph-menu-progress .wrapper .bar a").click(function (e){
          e.preventDefault();
          var hash = this.hash.substr(1);
          $('html, body').animate({
            scrollTop: $("#"+ hash).offset().top - 10
          }, 500);
        });
      }
    }
  };
  Drupal.behaviors.DRPLParagraphsCoverflowSlider = {
    attach: function (context, settings) {
      $('.main-container').once("imagesLoaded", function() {  
        var current = 1;
        $(".slider_coverflow .coverflow").each(function(){
          var $this = $(this);
          $this.children('li').each(function(){
            $(this).addClass('colorbox-gallery-'+current);
            $(this).attr('id', 'colorbox-gallery-' + current);
            $(this).attr('colorbox_num_index', current);
            current++;
          });
          current = 1;
        });
        var blocks_coverflow = $(".main-container div[coverflow_slide]");
        for(i = 0; i < blocks_coverflow.length; i++){
          var id_coverflow = $(blocks_coverflow[i]).attr('coverflow_slide');
          var controls = $('.coverflow-slide-'+id_coverflow+' .controls').attr('control_coverflow_slide', id_coverflow);
          $('.coverflow-slide-'+id_coverflow+' .coverflow').coverflow({
            index:      2,
            density:    2,
            innerOffset:  50,
            innerScale:   .7,
            innerAngle: -5,
            scrollBlockTime: 800,
            sensitivity: 1000,
            animateStep:  function(event, cover, offset, isVisible, isMiddle, sin, cos) {
              if (isVisible) {
                if (isMiddle) {
                  $(cover).css({
                    'filter':     'none',
                    '-webkit-filter': 'none'
                  });
                } else {
                  var brightness  = 1 + Math.abs(sin),
                    contrast  = 1 - Math.abs(sin),
                    filter    = 'contrast('+contrast+') brightness('+brightness+')';
                  $(cover).css({
                    'filter':     filter,
                    '-webkit-filter': filter
                  });
                }
              }
            },
          });
          //Paginator
          $(".coverflow-slide-"+id_coverflow+" .coverflow-slider .bx-pager").html(($('.coverflow-slide-'+id_coverflow+' .coverflow').coverflow('index')+1) + " / " + ($('.coverflow-slide-'+id_coverflow+' .coverflow').children().length));
          //Prev button
          $(".coverflow-slide-"+id_coverflow+" .coverflow-slider .bx-prev").on('click', function(e){
            e.preventDefault();
            var control_class_coverflow_id = $(this).parent().parent(".controls").attr("control_coverflow_slide");
            var currentIndex = $('.coverflow-slide-'+control_class_coverflow_id+' .coverflow').coverflow('index');
            if(currentIndex == 0){
              $('.coverflow-slide-'+control_class_coverflow_id+' .coverflow').coverflow('index', $('.coverflow-slide-'+control_class_coverflow_id+' .coverflow').find("li").length - 1);  
              $('.coverflow-slide-'+control_class_coverflow_id+' .coverflow').coverflow('refresh', 1000);
            } else {
              $('.coverflow-slide-'+control_class_coverflow_id+' .coverflow').coverflow('index', currentIndex - 1);
            }
            $(".coverflow-slide-"+control_class_coverflow_id+" .coverflow-slider .bx-pager").html(($('.coverflow-slide-'+control_class_coverflow_id+' .coverflow').coverflow('index')+1) + " / " + ($('.coverflow-slide-'+control_class_coverflow_id+' .coverflow').children().length));
          });
          //Next button
          $(".coverflow-slide-"+id_coverflow+" .coverflow-slider .bx-next").on('click', function(e){
            e.preventDefault();
            var control_class_coverflow_id = $(this).parent().parent(".controls").attr("control_coverflow_slide");
            var currentIndex = $('.coverflow-slide-'+control_class_coverflow_id+' .coverflow').coverflow('index');
            if(currentIndex == $('.coverflow-slide-'+control_class_coverflow_id+' .coverflow').find("li").length - 1){
              $('.coverflow-slide-'+control_class_coverflow_id+' .coverflow').coverflow('index', 0);  
              $('.coverflow-slide-'+control_class_coverflow_id+' .coverflow').coverflow('refresh', 1000);
            } else {
              $('.coverflow-slide-'+control_class_coverflow_id+' .coverflow').coverflow('index', currentIndex + 1);
            }
            $(".coverflow-slide-"+control_class_coverflow_id+" .coverflow-slider .bx-pager").html(($('.coverflow-slide-'+control_class_coverflow_id+' .coverflow').coverflow('index')+1) + " / " + ($('.coverflow-slide-'+control_class_coverflow_id+' .coverflow').children().length));
          });
          $(".coverflow-slide-"+id_coverflow+" .coverflow-slider ul li").on('mousedown tap', '> *', function(event) {
            var currentIndex = $(this).parent().attr("colorbox_num_index");
            var control_class_coverflow_id = $(this).closest(".coverflow-slider").find(".controls").attr("control_coverflow_slide");
            $(".coverflow-slide-"+control_class_coverflow_id+" .coverflow-slider .bx-pager").html(currentIndex + " / " + ($('.coverflow-slide-'+control_class_coverflow_id+' .coverflow').children().length));
          });
        }
      });   
    } 
  };
  Drupal.behaviors.DRPLParagraphsMapImage = {
    attach: function (context, settings) {
     	var map_google = document.getElementById("drpl-map-google");
     	var map_information = document.getElementById("drpl-map-information");
     	var map_link = document.getElementById("drpl-map-link");
     	if(map_google && map_link && map_information){
				$('#drpl-map-link').click(function(){
				  $("#drpl-map-google").toggleClass("open");
				});
     	}
    } 
  };
  Drupal.behaviors.DRPLParagraphsMultidivSection = {
    attach: function (context, settings) {
      if ($(".field-type-paragraphs .section-column").length > 0){
        var sections = $(".field-type-paragraphs .section-column");
        for(i = 0; i < sections.length; i++){
          if(sections[i].childElementCount > 1){
            sections[i].className += " multipledivs";
          }
        }
      }  
    } 
  };
  Drupal.behaviors.DRPLParagraphsFilesSearch = {
    attach: function (context, settings) {
      if ($(".paragraphs-item-file-search-by-date .files_searchs_block").length > 0){
        var files_search_block = $(".paragraphs-item-file-search-by-date [id*='k_id_']");
        for(i = 0; i < files_search_block.length; i++){
          var files_search_block_id = $(files_search_block[i]).attr('id').split('files_searchs_block_id_')[1];
          $("#files_searchs_block_id_"+files_search_block_id+" .date-arrow").click(function(){
            var parent = $(this).parent().parent().parent();
            if (parent[0].className == 'date-start') {
              var input = '.form-item-date-filter-value-date';
            }
            var paragraph = $(this).closest(".group-paragraph");
            var date = parent.attr('date');
            var type = $(this).attr('type');
            var action = $(this).attr('action');
            $.ajax({
              url: '/files_navigation_script_ajax',
              type: 'GET',
              data: {date: date, type: type, action:action},
              success: function(response) {
                parent.attr('date', response['date']);
                parent.find(".month")[0].innerHTML = response['long_month'];
                parent.find(".year")[0].innerHTML = response['year'];
                paragraph.find(input+" input").val(response['month']+'/'+response['year']);
                paragraph.find(input+" input").val(response['month']+'/'+response['year']);
              },
              dataType: 'json'
            });
          });
          $("#files_searchs_block_id_"+files_search_block_id+" .showall").click(function(){
            var parent = $(this).parent().parent();
            var date = parent.attr('date');
            $.ajax({
              url: '/files_showall_script_ajax',
              type: 'GET',
              data: {date: date},
              success: function(response) {
                document.getElementById("files_searchs_block_list_"+files_search_block_id).innerHTML = response['list'];
              },
              dataType: 'json'
            });
          });
        }
      } 
    } 
  };
  Drupal.behaviors.DRPLParagraphsDiaryCalendar = {
    attach: function (context, settings) {
     	//Get current date
     	var today = new Date();
			var dd = today.getDate();
			var mm = today.getMonth()+1; //January is 0!
			var yyyy = today.getFullYear();
			if(dd<10) {dd='0'+dd} 
			if(mm<10) {mm='0'+mm} 
			today = yyyy+'-'+mm+'-'+dd;
			var current_date = today;
      if ($('.paragraphs-item-calendar-block').length > 0) {
        $cal = $(".paragraphs-item-calendar-block .block-custom-drpl-paragraphs div[id*='calendar_block_diary_id_']");
        for($i = 0; $i < $cal.length; $i++){
          $id = $($cal[$i]).attr('id').split('calendar_block_diary_id_');
          var id_diary = $id[1];
          //Get default language
          var dayNamesShort = ['S', 'M', 'T', 'W', 'T', 'F', 'S'];  
          var current_lang = Drupal.settings.settings.language;
          if(current_lang == 'es'){
            dayNamesShort = ['D', 'L', 'M', 'M', 'J', 'V', 'S'];  
          }
    			$('#calendar_block_diary_id_'+id_diary).fullCalendar({
    				header: {
    					left: false, //'prev,next'
    					center: false, //title
    					right: false
    				},
    				defaultDate: current_date,
            dayNamesShort: dayNamesShort,
    				lang: "es",
    	      firstDay: 1,
    				selectable: true,
    				selectHelper: true, 
            dayRender: function (date, cell) {
              cell.attr("calendar_id", id_diary);
            },
    				dayClick: function(date, jsEvent, view) {
              var calendar_id = $(this).attr("calendar_id");
              var node_id = $("#calendar_block_attributes_"+calendar_id).attr("calendar_block_node_id_"+calendar_id);
              var tax_filter = $("#calendar_block_attributes_"+calendar_id).attr("calendar_block_tax_filter_"+calendar_id);
    					$.ajax({
                url: '/calendar_script_ajax',
                type: 'GET',
                data: {date: date.format(), node_id: node_id, tax_filter: tax_filter},
                success: function(response) {
                	document.getElementById("calendar_block_events_list_"+calendar_id).innerHTML = response['list'];
                	document.getElementById("calendar_block_date_day_v1_"+calendar_id).innerHTML = response['new_day_week'];
                	document.getElementById("calendar_block_date_day_v2_"+calendar_id).innerHTML = response['new_day_month'];
                },
                dataType: 'json'
              });
        		},
    				editable: true,
    				eventLimit: true
    			});
        }
      }
    } 
  };
  Drupal.behaviors.DRPLParagraphsNewsSearch = {
    attach: function (context, settings) {
      if ($(".paragraphs-item-news-search .news_searchs_block").length > 0){
        var news_search_block = $(".paragraphs-item-news-search [id*='k_id_']");
        for(i = 0; i < news_search_block.length; i++){
          var news_search_block_id = $(news_search_block[i]).attr('id').split('news_searchs_block_id_')[1];
          $("#news_searchs_block_id_"+news_search_block_id+" .date-arrow").click(function(){
            var parent = $(this).parent().parent().parent();
            if (parent[0].className == 'date-start') {
              var input = '.form-item-field-date-value';
            }
            else{
              var input = '.form-item-field-date-value2';   
            }
            var paragraph = $(this).closest(".group-paragraph");
            var date = parent.attr('date');
            var type = $(this).attr('type');
            var action = $(this).attr('action');
            console.log(date);
            $.ajax({
              url: '/news_navigation_script_ajax',
              type: 'GET',
              data: {date: date, type: type, action:action},
              success: function(response) {
                console.log(response);
                parent.attr('date', response['date']);
                parent.find(".day")[0].innerHTML = response['day'];
                parent.find(".month")[0].innerHTML = response['long_month'];
                parent.find(".year")[0].innerHTML = response['year'];
                paragraph.find(input+" input").val(response['year']+'-'+response['month']+'-'+response['day']);
                paragraph.find(input+" input").val(response['year']+'-'+response['month']+'-'+response['day']);
              },
              dataType: 'json'
            });
          });
        }
      } 
    } 
  };
  Drupal.behaviors.DRPLParagraphsEventsSearch = {
    attach: function (context, settings) {
      if ($(".paragraphs-item-events-search .events_searchs_block").length > 0){
        var events_search_block = $(".paragraphs-item-events-search [id*='k_id_']");
        for(i = 0; i < events_search_block.length; i++){
          var events_search_block_id = $(events_search_block[i]).attr('id').split('events_searchs_block_id_')[1];
          $("#events_searchs_block_id_"+events_search_block_id+" .date-arrow").click(function(){  
            var date = $(this).attr("date");
            var parent = $(this).parent();
            var paragraph = $(this).closest(".group-paragraph");
            $.ajax({
              url: '/calendar_navigation_script_ajax',
              type: 'GET',
              data: {date: date},
              success: function(response) {
                parent.find(".date-diary")[0].innerHTML = response['date'];
                parent.find(".date-diary").attr('date', date);
                parent.find(".prev-month").attr('date', response['prev_month']);
                parent.find(".next-month").attr('date', response['next_month']);
                paragraph.find(".form-item-field-date-value input").val(response['date_from']);
                paragraph.find(".form-item-field-date-value2 input").val(response['date_end']);
              },
              dataType: 'json'
            });
          });
        }
      } 
    } 
  };
  Drupal.behaviors.DRPLParagraphsCall = {
    attach: function (context, settings) {
      if ($('.paragraphs-item-call-no-text').length > 0) {
        $( ".paragraphs-item-call-no-text .group-content .col-md-4" ).before( "<div class='group-paragraph-main-information field-group-div col-md-8'></div>" );
      }
    } 
  };
  Drupal.behaviors.DRPLParagraphsSwitch = {
    attach: function (context, settings) {
      if ($('.paragraphs-item-switch').length > 0) {
        $(".paragraphs-item-switch .paragraphs-item-title-text .panel-collapse").removeClass( "in" );
      }
      $(".paragraphs-items-switch .group-paragraph-parent-fieldset > legend").click(function(){
        $(this).parent(".group-paragraph-parent-fieldset").toggleClass("open");
      });
    } 
  };
})(jQuery);





