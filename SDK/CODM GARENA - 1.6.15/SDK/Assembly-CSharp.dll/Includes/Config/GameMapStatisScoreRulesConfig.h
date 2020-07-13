#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class GameMapStatisScoreRulesConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "GameMapStatisScoreRulesConfig"));
	}

	template <typename T = int32_t> T& Game_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Game_mode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Map_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Kill_score() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Pass_score() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Dead_score() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Wave_score() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_Game_type() {
		return ((T (*)(GameMapStatisScoreRulesConfig*))(Il2CppBase() + 0x4646794))(this);
	}
	template <typename T = void> T set_Game_type(int32_t value) {
		return ((T (*)(GameMapStatisScoreRulesConfig*, int32_t))(Il2CppBase() + 0x464679C))(this, value);
	}
	template <typename T = int32_t> T get_Game_mode() {
		return ((T (*)(GameMapStatisScoreRulesConfig*))(Il2CppBase() + 0x46467A4))(this);
	}
	template <typename T = void> T set_Game_mode(int32_t value) {
		return ((T (*)(GameMapStatisScoreRulesConfig*, int32_t))(Il2CppBase() + 0x46467AC))(this, value);
	}
	template <typename T = int32_t> T get_Map_id() {
		return ((T (*)(GameMapStatisScoreRulesConfig*))(Il2CppBase() + 0x46467B4))(this);
	}
	template <typename T = void> T set_Map_id(int32_t value) {
		return ((T (*)(GameMapStatisScoreRulesConfig*, int32_t))(Il2CppBase() + 0x46467BC))(this, value);
	}
	template <typename T = int32_t> T get_Kill_score() {
		return ((T (*)(GameMapStatisScoreRulesConfig*))(Il2CppBase() + 0x46467C4))(this);
	}
	template <typename T = void> T set_Kill_score(int32_t value) {
		return ((T (*)(GameMapStatisScoreRulesConfig*, int32_t))(Il2CppBase() + 0x46467CC))(this, value);
	}
	template <typename T = int32_t> T get_Pass_score() {
		return ((T (*)(GameMapStatisScoreRulesConfig*))(Il2CppBase() + 0x46467D4))(this);
	}
	template <typename T = void> T set_Pass_score(int32_t value) {
		return ((T (*)(GameMapStatisScoreRulesConfig*, int32_t))(Il2CppBase() + 0x46467DC))(this, value);
	}
	template <typename T = int32_t> T get_Dead_score() {
		return ((T (*)(GameMapStatisScoreRulesConfig*))(Il2CppBase() + 0x46467E4))(this);
	}
	template <typename T = void> T set_Dead_score(int32_t value) {
		return ((T (*)(GameMapStatisScoreRulesConfig*, int32_t))(Il2CppBase() + 0x46467EC))(this, value);
	}
	template <typename T = int32_t> T get_Wave_score() {
		return ((T (*)(GameMapStatisScoreRulesConfig*))(Il2CppBase() + 0x46467F4))(this);
	}
	template <typename T = void> T set_Wave_score(int32_t value) {
		return ((T (*)(GameMapStatisScoreRulesConfig*, int32_t))(Il2CppBase() + 0x46467FC))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(GameMapStatisScoreRulesConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4646804))(this, bytes, position);
	}

};

}
