#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class VTOLProjectileSimulator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "VTOLProjectileSimulator"));
	}

	template <typename T = uintptr_t> T& m_Timer() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppVector3> T& m_CacheExplodePos() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppQuaternion> T& m_ChangeVelocityDirSrc() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppQuaternion> T& m_ChangeVelocityDirDst() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& m_ChangeVelocityDirStartTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLocationAndVelocityDir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeVelocityDir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SlerpChangeVelocityDir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckExplodePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T ResetLocationAndVelocityDir(Il2CppVector3 location, Il2CppVector3 velocityDir) {
		return ((T (*)(VTOLProjectileSimulator*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2E93088))(this, location, velocityDir);
	}
	template <typename T = void> T ChangeVelocityDir() {
		return ((T (*)(VTOLProjectileSimulator*))(Il2CppBase() + 0x2E93320))(this);
	}
	template <typename T = void> T SlerpChangeVelocityDir() {
		return ((T (*)(VTOLProjectileSimulator*))(Il2CppBase() + 0x2E93550))(this);
	}
	template <typename T = void> T Init(Il2CppVector3 initalPosition, Il2CppVector3 initalVelocity, uintptr_t data, uintptr_t handler) {
		return ((T (*)(VTOLProjectileSimulator*, Il2CppVector3, Il2CppVector3, uintptr_t, uintptr_t))(Il2CppBase() + 0x2E937C8))(this, initalPosition, initalVelocity, data, handler);
	}
	template <typename T = void> T CheckExplodePosition(Il2CppVector3 initalPosition, Il2CppVector3 initalVelocity) {
		return ((T (*)(VTOLProjectileSimulator*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2E938E0))(this, initalPosition, initalVelocity);
	}
	template <typename T = void> T xLuaBaseProxy_Init(Il2CppVector3 P0, Il2CppVector3 P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(VTOLProjectileSimulator*, Il2CppVector3, Il2CppVector3, uintptr_t, uintptr_t))(Il2CppBase() + 0x2E93BF0))(this, P0, P1, P2, P3);
	}

};

}
