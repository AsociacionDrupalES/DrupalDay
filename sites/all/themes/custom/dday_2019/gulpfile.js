// jshint ignore: start
'use strict';
const gulp = require('gulp');
const sass = require('gulp-sass');
const sourcemaps = require('gulp-sourcemaps');
const sassGlob = require('gulp-sass-glob');

// Here we define which sass dirs we should process/watch and which exclude.
const sassSrcDirs = ['sass/**/*.scss', '!sass/external-libraries', '!sass/external-libraries/**'];

// Compiles sass files and moves the result to dist.
gulp.task('sass', function () {
  return gulp.src(sassSrcDirs)
    .pipe(sassGlob())
    .pipe(sourcemaps.init())
    .pipe(sass({
      outputStyle: 'expanded',
      includePaths: ['./node_modules/breakpoint-sass/stylesheets']
    }).on('error', sass.logError))
    .pipe(sourcemaps.write('.'))
    .pipe(gulp.dest('css'));
});

// -------------------------------------------------

// Build.
gulp.task('build', ['sass']);

// Watch changes in general and detect when something relevant gets changed.
gulp.task('watch', ['build'], function () {
  gulp.watch(sassSrcDirs, ['build']);
});
