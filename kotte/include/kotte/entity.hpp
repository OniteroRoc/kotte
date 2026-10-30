#pragma once

#include "kotte/entity_handle.hpp"

#include <cstdint>
#include <optional>
#include <raylib.h>

namespace kotte
{
    enum class EntityKind : std::uint8_t {
        player,
        bomb,
        crate,
        enemy,
        blast_range_power_up,
        shield_power_up
    };

    enum class CardinalDirection : std::uint8_t {
        up,
        right,
        down,
        left
    };

    struct BombState final {
        EntityHandle owner;
        float fuse_remaining = 0.0f;
        std::uint8_t blast_range = 0;
        bool detonation_requested = false;
        bool sliding = false;
        CardinalDirection slide_direction = CardinalDirection::right;
    };

    struct Entity final {
        EntityKind kind = EntityKind::crate;
        Vector2 world_position{};
        CardinalDirection movement_heading = CardinalDirection::right;
        std::optional<BombState> bomb_state;
    };

    struct ShieldPowerUpState final {
        float remaining_seconds = 0.0f;
    };
}
