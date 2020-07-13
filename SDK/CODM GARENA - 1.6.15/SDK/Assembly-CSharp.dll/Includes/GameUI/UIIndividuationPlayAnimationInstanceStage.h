#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIIndividuationPlayAnimationInstanceStage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIIndividuationPlayAnimationInstanceStage"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& UIIndividuationPlayAnimationInstanceStage_None() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& UIIndividuationPlayAnimationInstanceStage_Prepare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& UIIndividuationPlayAnimationInstanceStage_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& UIIndividuationPlayAnimationInstanceStage_PostPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& UIIndividuationPlayAnimationInstanceStage_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
