#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class FireAreaWall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "FireArea_Wall"));
	}

	template <typename T = uint32_t> T& m_ActorId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& m_startPoint() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& m_endPotint() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& m_extent() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_Duration() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_rotationY() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_CreateTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& m_CurrentPosition() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& m_Direction() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActorId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFireWallInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uint32_t> T get_ActorId() {
		return ((T (*)(FireAreaWall*))(Il2CppBase() + 0x49C0B08))(this);
	}
	template <typename T = Il2CppVector3> T get_StartPoint() {
		return ((T (*)(FireAreaWall*))(Il2CppBase() + 0x49C0B10))(this);
	}
	template <typename T = Il2CppVector3> T get_EndPoint() {
		return ((T (*)(FireAreaWall*))(Il2CppBase() + 0x49C0B24))(this);
	}
	template <typename T = Il2CppVector3> T get_Extent() {
		return ((T (*)(FireAreaWall*))(Il2CppBase() + 0x49C0B38))(this);
	}
	template <typename T = float> T get_Duration() {
		return ((T (*)(FireAreaWall*))(Il2CppBase() + 0x49C0B4C))(this);
	}
	template <typename T = int32_t> T get_RotationY() {
		return ((T (*)(FireAreaWall*))(Il2CppBase() + 0x49C0B54))(this);
	}
	template <typename T = float> T get_CreateTime() {
		return ((T (*)(FireAreaWall*))(Il2CppBase() + 0x49C0B5C))(this);
	}
	template <typename T = float> T get_StartTime() {
		return ((T (*)(FireAreaWall*))(Il2CppBase() + 0x49C0B64))(this);
	}
	template <typename T = float> T get_EndTime() {
		return ((T (*)(FireAreaWall*))(Il2CppBase() + 0x49C0B6C))(this);
	}
	template <typename T = Il2CppVector3> T get_CurrentPos() {
		return ((T (*)(FireAreaWall*))(Il2CppBase() + 0x49C0B80))(this);
	}
	template <typename T = Il2CppVector3> T get_Direction() {
		return ((T (*)(FireAreaWall*))(Il2CppBase() + 0x49C0CC0))(this);
	}
	template <typename T = Il2CppVector3> T get_effectoffset() {
		return ((T (*)(FireAreaWall*))(Il2CppBase() + 0x49C0CD4))(this);
	}
	template <typename T = uint32_t> T GetActorId() {
		return ((T (*)(FireAreaWall*))(Il2CppBase() + 0x49C0D0C))(this);
	}
	template <typename T = void> T SetFireWallInfo(float createTime, Il2CppVector3 startPoint, Il2CppVector3 endPoint, float duration, int32_t rotationY, Il2CppVector3 extent) {
		return ((T (*)(FireAreaWall*, float, Il2CppVector3, Il2CppVector3, float, int32_t, Il2CppVector3))(Il2CppBase() + 0x49C0DAC))(this, createTime, startPoint, endPoint, duration, rotationY, extent);
	}

};

}
