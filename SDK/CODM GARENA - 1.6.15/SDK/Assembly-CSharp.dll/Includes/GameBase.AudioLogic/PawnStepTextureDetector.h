#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.AudioLogic {

class PawnStepTextureDetector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.AudioLogic", "PawnStepTextureDetector"));
	}

	template <typename T = Il2CppVector3> T& mLastPos() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mOwner() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> static T& mLastCheckFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Term() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckVer1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckHorizontal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Init(uintptr_t pSE) {
		return ((T (*)(PawnStepTextureDetector*, uintptr_t))(Il2CppBase() + 0x3B9F244))(this, pSE);
	}
	template <typename T = void> T Term() {
		return ((T (*)(PawnStepTextureDetector*))(Il2CppBase() + 0x3B9E54C))(this);
	}
	template <typename T = void> T Check() {
		return ((T (*)(PawnStepTextureDetector*))(Il2CppBase() + 0x3BA8048))(this);
	}
	template <typename T = void> T CheckH() {
		return ((T (*)(PawnStepTextureDetector*))(Il2CppBase() + 0x3BA8528))(this);
	}
	template <typename T = void> T CheckVer1() {
		return ((T (*)(PawnStepTextureDetector*))(Il2CppBase() + 0x3BAD170))(this);
	}
	template <typename T = void> T CheckHorizontal() {
		return ((T (*)(PawnStepTextureDetector*))(Il2CppBase() + 0x3BADA18))(this);
	}

};

}
