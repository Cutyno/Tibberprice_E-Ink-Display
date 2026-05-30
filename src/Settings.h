#ifndef SETTINGS_H
#define SETTINGS_H

// ####### Settings #####################################################

// Activate quarter-hour resolution for the price data. If deactivated, the code will use hourly resolution.
// The quarter-hour resolution provides more detailed price information but may require more memory and processing power.
#define QUARTER_HOUR_RESOLUTION

// Number of pixels per hour on the x-axis - affects the spacing of the labels
// This setting is independendent of the resolution but should be able to be
// divided by 4 if QUARTER_HOUR_RESOLUTION is active
#define HOUR_SPACING 38

#ifdef QUARTER_HOUR_RESOLUTION
#define BARS_PER_DAY 96 // 24h * 4 = 96 prices, each for the current and the next day
#define BAR_WIDTH 4
#else
#define BARS_PER_DAY 24 // 24h = 24 prices, each for the current and the next day
#define BAR_WIDTH 16
#endif

#endif // SETTINGS_H