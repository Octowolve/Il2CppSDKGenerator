#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RootMotionCoverSpot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RootMotionCoverSpot"));
	}

	template <typename T = uintptr_t> T& m_EntryPointInfo() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_FireFromCoverAnimationInfo() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> static T& Distance_90_Degree() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& Distance_45_Degree() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& Distance_135_Degree() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& LeftRootMotionEntryAnimationName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppString*> static T& MiddleRootMotionEntryAnimationName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& RightRootMotionEntryAnimationName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppString*> static T& LeftRootMotionLeaveAnimationName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppString*> static T& RightRootMotionLeaveAnimationName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppString*> static T& LeftRootMotionReturnAnimationName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppString*> static T& RightRootMotionReturnAnimationName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = Il2CppString*> static T& CrouchCoverEntryAnimationName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppString*> static T& CrouchCoverReturnAnimationName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = Il2CppString*> static T& CrouchCoverLeaveAnimationName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEnterCoverPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEnterCoverRot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEnterCoverAnimationName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CaculateEntryPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLeaveCoverAnimationName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = Il2CppVector3> T GetEnterCoverPos() {
		return ((T (*)(RootMotionCoverSpot*))(Il2CppBase() + 0x414185C))(this);
	}
	template <typename T = Il2CppQuaternion> T GetEnterCoverRot() {
		return ((T (*)(RootMotionCoverSpot*))(Il2CppBase() + 0x414197C))(this);
	}
	template <typename T = Il2CppString*> T GetEnterCoverAnimationName() {
		return ((T (*)(RootMotionCoverSpot*))(Il2CppBase() + 0x4141AE4))(this);
	}
	template <typename T = void> T CaculateEntryPoint(Il2CppVector3 inPawnPos) {
		return ((T (*)(RootMotionCoverSpot*, Il2CppVector3))(Il2CppBase() + 0x4141BB4))(this, inPawnPos);
	}
	template <typename T = uintptr_t> T GetLeaveCoverAnimationName() {
		return ((T (*)(RootMotionCoverSpot*))(Il2CppBase() + 0x4142B80))(this);
	}

};

}
