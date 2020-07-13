#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class GameStateViewMode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "GameStateViewMode"));
	}

	template <typename T = int32_t> T& Mode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& LevelID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& MissionID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& FirstWin() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ExpReward() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& GoldReward() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T set_Mode(int32_t value) {
		return ((T (*)(GameStateViewMode*, int32_t))(Il2CppBase() + 0x3B289DC))(this, value);
	}
	template <typename T = int32_t> T get_Mode() {
		return ((T (*)(GameStateViewMode*))(Il2CppBase() + 0x3B289E4))(this);
	}
	template <typename T = void> T set_LevelID(int32_t value) {
		return ((T (*)(GameStateViewMode*, int32_t))(Il2CppBase() + 0x3B289EC))(this, value);
	}
	template <typename T = int32_t> T get_LevelID() {
		return ((T (*)(GameStateViewMode*))(Il2CppBase() + 0x3B289F4))(this);
	}
	template <typename T = void> T set_MissionID(int32_t value) {
		return ((T (*)(GameStateViewMode*, int32_t))(Il2CppBase() + 0x3B289FC))(this, value);
	}
	template <typename T = int32_t> T get_MissionID() {
		return ((T (*)(GameStateViewMode*))(Il2CppBase() + 0x3B28A04))(this);
	}
	template <typename T = void> T set_FirstWin(bool value) {
		return ((T (*)(GameStateViewMode*, bool))(Il2CppBase() + 0x3B28A0C))(this, value);
	}
	template <typename T = bool> T get_FirstWin() {
		return ((T (*)(GameStateViewMode*))(Il2CppBase() + 0x3B28A14))(this);
	}
	template <typename T = void> T set_ExpReward(int32_t value) {
		return ((T (*)(GameStateViewMode*, int32_t))(Il2CppBase() + 0x3B28A1C))(this, value);
	}
	template <typename T = int32_t> T get_ExpReward() {
		return ((T (*)(GameStateViewMode*))(Il2CppBase() + 0x3B28A24))(this);
	}
	template <typename T = void> T set_GoldReward(int32_t value) {
		return ((T (*)(GameStateViewMode*, int32_t))(Il2CppBase() + 0x3B28A2C))(this, value);
	}
	template <typename T = int32_t> T get_GoldReward() {
		return ((T (*)(GameStateViewMode*))(Il2CppBase() + 0x3B28A34))(this);
	}

};

}
