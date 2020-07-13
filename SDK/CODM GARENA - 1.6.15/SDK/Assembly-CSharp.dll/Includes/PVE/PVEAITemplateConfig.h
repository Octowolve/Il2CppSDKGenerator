#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEAITemplateConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEAITemplateConfig"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& PlayMakerAssetIdDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayMakerAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T GetPlayMakerAssetId(uintptr_t pawnType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x437A704))(0, pawnType);
	}

};

}
