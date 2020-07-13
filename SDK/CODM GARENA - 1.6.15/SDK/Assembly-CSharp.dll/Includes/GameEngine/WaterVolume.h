#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WaterVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WaterVolume"));
	}

	template <typename T = bool> T& ExportMeshCollider() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& MeshColliderName() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnEnterVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnExitVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T get_NoFallingDamage() {
		return ((T (*)(WaterVolume*))(Il2CppBase() + 0x2E94D9C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(WaterVolume*))(Il2CppBase() + 0x2E94DA4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(WaterVolume*))(Il2CppBase() + 0x2E94EE4))(this);
	}
	template <typename T = void> T OnPawnEnterVolume(uintptr_t pawn) {
		return ((T (*)(WaterVolume*, uintptr_t))(Il2CppBase() + 0x2E94F90))(this, pawn);
	}
	template <typename T = void> T OnPawnExitVolume(uintptr_t pawn) {
		return ((T (*)(WaterVolume*, uintptr_t))(Il2CppBase() + 0x2E950C4))(this, pawn);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(WaterVolume*))(Il2CppBase() + 0x2E951F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(WaterVolume*))(Il2CppBase() + 0x2E95200))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnPawnEnterVolume(uintptr_t P0) {
		return ((T (*)(WaterVolume*, uintptr_t))(Il2CppBase() + 0x2E95204))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnPawnExitVolume(uintptr_t P0) {
		return ((T (*)(WaterVolume*, uintptr_t))(Il2CppBase() + 0x2E9520C))(this, P0);
	}

};

}
