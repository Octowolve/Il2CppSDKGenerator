#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameComponent"));
	}

	template <typename T = uintptr_t> T& m_Game() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExitMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRestartPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyWorldShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectUnRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Init(uintptr_t game) {
		return ((T (*)(GameComponent*, uintptr_t))(Il2CppBase() + 0x4A015C4))(this, game);
	}
	template <typename T = void> T ForceTick(float deltaTime) {
		return ((T (*)(GameComponent*, float))(Il2CppBase() + 0x4A01858))(this, deltaTime);
	}
	template <typename T = void> T OnRoundStart() {
		return ((T (*)(GameComponent*))(Il2CppBase() + 0x4A018F8))(this);
	}
	template <typename T = void> T OnRoundEnd() {
		return ((T (*)(GameComponent*))(Il2CppBase() + 0x4A01990))(this);
	}
	template <typename T = void> T OnStartMatch() {
		return ((T (*)(GameComponent*))(Il2CppBase() + 0x4A01A28))(this);
	}
	template <typename T = void> T OnEndMatch() {
		return ((T (*)(GameComponent*))(Il2CppBase() + 0x4A01AC0))(this);
	}
	template <typename T = void> T OnExitMatch() {
		return ((T (*)(GameComponent*))(Il2CppBase() + 0x4A01B58))(this);
	}
	template <typename T = void> T OnRestartPlayer() {
		return ((T (*)(GameComponent*))(Il2CppBase() + 0x4A01BF0))(this);
	}
	template <typename T = void> T ApplyWorldShift(Il2CppVector3 shift) {
		return ((T (*)(GameComponent*, Il2CppVector3))(Il2CppBase() + 0x4A01C88))(this, shift);
	}
	template <typename T = void> T OnLevelObjectRegistered(uintptr_t levelObject) {
		return ((T (*)(GameComponent*, uintptr_t))(Il2CppBase() + 0x4A01D44))(this, levelObject);
	}
	template <typename T = void> T OnLevelObjectUnRegistered(uintptr_t levelObject) {
		return ((T (*)(GameComponent*, uintptr_t))(Il2CppBase() + 0x4A01DE4))(this, levelObject);
	}

};

}
