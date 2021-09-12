
var slideshows01 = document.querySelectorAll
('[data-component="slideshow01"]');
slideshows01.forEach(initSlideShow01);

function initSlideShow01(slideshow01) {

	var slides = document.querySelectorAll
	(`#${slideshow01.id} [role="list"] .slide01`);

	var index = 0, time = 1000;
	slides[index].classList.add('active');

	setInterval( () => {
		slides[index].classList.remove('active');

		index++;
		if (index === slides.length) index = 0;

		slides[index].classList.add('active');

	}, time);
}


var slideshows02 = document.querySelectorAll
('[data-component="slideshow02"]');
slideshows02.forEach(initSlideShow02);

function initSlideShow02(slideshow02) {

	var slides = document.querySelectorAll
	(`#${slideshow02.id} [role="list"] .slide02`);

	var index = 0, time = 2000;
	slides[index].classList.add('active');

	setInterval( () => {
		slides[index].classList.remove('active');

		index++;
		if (index === slides.length) index = 0;

		slides[index].classList.add('active');

	}, time);
}
