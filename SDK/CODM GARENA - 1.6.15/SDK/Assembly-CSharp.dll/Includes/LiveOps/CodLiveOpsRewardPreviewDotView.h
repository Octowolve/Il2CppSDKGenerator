#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class CodLiveOpsRewardPreviewDotView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "CodLiveOpsRewardPreviewDotView"));
	}

	template <typename T = uintptr_t> T& ObjOn() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ObjNorma() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetData(bool on) {
		return ((T (*)(CodLiveOpsRewardPreviewDotView*, bool))(Il2CppBase() + 0x354DD38))(this, on);
	}

};

}
