#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIMaterialAniSequence
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIMaterialAniSequence"));
	}

	template <typename T = uintptr_t> T& aniObj() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& MaterialName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& materialParams() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& materialSpeedParams() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& orignMaterials() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_bFinish() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Play() {
		return ((T (*)(UIMaterialAniSequence*))(Il2CppBase() + 0x3AFF234))(this);
	}
	template <typename T = bool> T get_bFinish() {
		return ((T (*)(UIMaterialAniSequence*))(Il2CppBase() + 0x3AFF9B0))(this);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(UIMaterialAniSequence*))(Il2CppBase() + 0x3AFF9B8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIMaterialAniSequence*))(Il2CppBase() + 0x3B00230))(this);
	}

};

}
