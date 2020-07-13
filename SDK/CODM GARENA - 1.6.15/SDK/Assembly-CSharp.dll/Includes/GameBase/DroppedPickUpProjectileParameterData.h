#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class DroppedPickUpProjectileParameterData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "DroppedPickUpProjectileParameterData"));
	}

	template <typename T = int32_t> T& m_ActorID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_ItemID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& m_StartPosition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& m_OwnerID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& m_StartVelocity() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_GravityScale() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_AssetID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& m_PositionOffset() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& m_RotationOffset() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_ActorID() {
		return ((T (*)(DroppedPickUpProjectileParameterData*))(Il2CppBase() + 0x40F1D68))(this);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(DroppedPickUpProjectileParameterData*))(Il2CppBase() + 0x40F1D70))(this);
	}
	template <typename T = Il2CppVector3> T get_StartPosition() {
		return ((T (*)(DroppedPickUpProjectileParameterData*))(Il2CppBase() + 0x40F1D78))(this);
	}
	template <typename T = uint32_t> T get_OwnerID() {
		return ((T (*)(DroppedPickUpProjectileParameterData*))(Il2CppBase() + 0x40F1FC4))(this);
	}
	template <typename T = Il2CppVector3> T get_StartVelocity() {
		return ((T (*)(DroppedPickUpProjectileParameterData*))(Il2CppBase() + 0x40F1D8C))(this);
	}
	template <typename T = float> T get_GravityScale() {
		return ((T (*)(DroppedPickUpProjectileParameterData*))(Il2CppBase() + 0x40F1DA0))(this);
	}
	template <typename T = int32_t> T get_AssetID() {
		return ((T (*)(DroppedPickUpProjectileParameterData*))(Il2CppBase() + 0x40F1FBC))(this);
	}
	template <typename T = Il2CppVector3> T get_PositionOffset() {
		return ((T (*)(DroppedPickUpProjectileParameterData*))(Il2CppBase() + 0x40F1FCC))(this);
	}
	template <typename T = Il2CppVector3> T get_RotationOffset() {
		return ((T (*)(DroppedPickUpProjectileParameterData*))(Il2CppBase() + 0x40F1FE0))(this);
	}

};

}
