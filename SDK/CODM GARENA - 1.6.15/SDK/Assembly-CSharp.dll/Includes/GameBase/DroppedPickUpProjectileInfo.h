#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class DroppedPickUpProjectileInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "DroppedPickUpProjectileInfo"));
	}

	template <typename T = int32_t> T& m_ItemID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = unsigned char> T& m_ItemSlot() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& m_StartPosition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& m_StartVelocity() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_GravityScale() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& m_DropPosition() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_CostTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(DroppedPickUpProjectileInfo*))(Il2CppBase() + 0x40F35F8))(this);
	}
	template <typename T = unsigned char> T get_ItemSlot() {
		return ((T (*)(DroppedPickUpProjectileInfo*))(Il2CppBase() + 0x40F3600))(this);
	}
	template <typename T = Il2CppVector3> T get_StartPosition() {
		return ((T (*)(DroppedPickUpProjectileInfo*))(Il2CppBase() + 0x40F3608))(this);
	}
	template <typename T = Il2CppVector3> T get_StartVelocity() {
		return ((T (*)(DroppedPickUpProjectileInfo*))(Il2CppBase() + 0x40F361C))(this);
	}
	template <typename T = float> T get_GravityScale() {
		return ((T (*)(DroppedPickUpProjectileInfo*))(Il2CppBase() + 0x40F3630))(this);
	}
	template <typename T = Il2CppVector3> T get_DropPosition() {
		return ((T (*)(DroppedPickUpProjectileInfo*))(Il2CppBase() + 0x40F3638))(this);
	}
	template <typename T = float> T get_CostTime() {
		return ((T (*)(DroppedPickUpProjectileInfo*))(Il2CppBase() + 0x40F364C))(this);
	}

};

}
