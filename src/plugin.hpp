#include <obs.h>
#pragma once

void create_mask_data(obs_source_t *source, uint32_t width, uint32_t height);

uint32_t get_mask_width(obs_source_t *source);

uint32_t get_mask_height(obs_source_t *source);

void set_mask_data(obs_source_t *source, const uint8_t *buffer);

void get_mask_data(obs_source_t *source, uint8_t *buffer);

void delete_mask_data(obs_source_t *source);
