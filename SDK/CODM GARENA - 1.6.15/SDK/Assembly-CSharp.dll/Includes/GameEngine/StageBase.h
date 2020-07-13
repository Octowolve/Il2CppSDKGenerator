#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class StageBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "StageBase"));
	}

	template <typename T = int32_t> T& StageType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = int32_t> T get_StageType() {
		return ((T (*)(StageBase*))(Il2CppBase() + 0x3403B50))(this);
	}
	template <typename T = void> T set_StageType(int32_t value) {
		return ((T (*)(StageBase*, int32_t))(Il2CppBase() + 0x3403B48))(this, value);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(StageBase*, float))(Il2CppBase() + 0x3403B58))(this, deltaTime);
	}
	template <typename T = void> T Init() {
		return ((T (*)(StageBase*))(Il2CppBase() + 0x3403BF8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(StageBase*))(Il2CppBase() + 0x3403C90))(this);
	}
	template <typename T = void> T OnLeave() {
		return ((T (*)(StageBase*))(Il2CppBase() + 0x3403D28))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(StageBase*))(Il2CppBase() + 0x3403DC0))(this);
	}
	template <typename T = void> T OnEvent(uintptr_t Msg) {
		return ((T (*)(StageBase*, uintptr_t))(Il2CppBase() + 0x3403E58))(this, Msg);
	}
	template <typename T = void> T OnZoneEvent(uintptr_t msg) {
		return ((T (*)(StageBase*, uintptr_t))(Il2CppBase() + 0x3403EF8))(this, msg);
	}
	template <typename T = void> T OnApplicationPause(bool paused) {
		return ((T (*)(StageBase*, bool))(Il2CppBase() + 0x3403F98))(this, paused);
	}

};

}
