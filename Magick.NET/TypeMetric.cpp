//=================================================================================================
// Copyright 2013-2014 Dirk Lemstra <https://magick.codeplex.com/>
//
// Licensed under the ImageMagick License (the "License"); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
//
//   http://www.imagemagick.org/script/license.php
//
// Unless required by applicable law or agreed to in writing, software distributed under the
// License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
// express or implied. See the License for the specific language governing permissions and
// limitations under the License.
//=================================================================================================
#include "Stdafx.h"
#include "TypeMetric.h"

namespace ImageMagick
{
	//==============================================================================================
	TypeMetric::TypeMetric(Magick::TypeMetric* metrics)
	{
		_Ascent = metrics->ascent();
		_Descent = metrics->descent();
		_MaxHorizontalAdvance = metrics->maxHorizontalAdvance();
		_TextWidth = metrics->textWidth();
		_TextHeight = metrics->textHeight();
		_UnderlinePosition = metrics->underlinePosition();
		_UnderlineThickness = metrics->underlineThickness();
	}
	//==============================================================================================
	double TypeMetric::Ascent::get()
	{
		return _Ascent;
	}
	//==============================================================================================
	double TypeMetric::Descent::get()
	{
		return _Descent;
	}
	//==============================================================================================
	double TypeMetric::MaxHorizontalAdvance::get()
	{
		return _MaxHorizontalAdvance;
	}
	//==============================================================================================
	double TypeMetric::TextHeight::get()
	{
		return _TextHeight;
	}
	//==============================================================================================
	double TypeMetric::TextWidth::get()
	{
		return _TextWidth;
	}
	//==============================================================================================
	double TypeMetric::UnderlinePosition::get()
	{
		return _UnderlinePosition;
	}
	//==============================================================================================
	double TypeMetric::UnderlineThickness::get()
	{
		return _UnderlineThickness;
	}
	//==============================================================================================
}