// AUTOGENERATED COPYRIGHT HEADER START
// Copyright (C) 2021-2023 Michael Fabian 'Xaymar' Dirks <info@xaymar.com>
// AUTOGENERATED COPYRIGHT HEADER END

#pragma once
#include "obs/gs/gs-effect.hpp"

#include "warning-disable.hpp"
#include <memory>
#include "warning-enable.hpp"

namespace streamfx::gfx::lut {
	class data {
		std::shared_ptr<streamfx::obs::gs::effect> _producer_effect;
		std::shared_ptr<streamfx::obs::gs::effect> _consumer_effect;

		public:
		static std::shared_ptr<data> instance();

		private:
		data();

		public:
		~data();

		inline std::shared_ptr<streamfx::obs::gs::effect> producer_effect()
		{
			return _producer_effect;
		};

		inline std::shared_ptr<streamfx::obs::gs::effect> consumer_effect()
		{
			return _consumer_effect;
		};
	};

	enum class color_depth {
		Invalid = 0,
		_2      = 2,
		_4      = 4,
		_6      = 6,
		_8      = 8,
		_10     = 10,
		_12     = 12,
		_14     = 14,
		_16     = 16,
	};
} // namespace streamfx::gfx::lut
