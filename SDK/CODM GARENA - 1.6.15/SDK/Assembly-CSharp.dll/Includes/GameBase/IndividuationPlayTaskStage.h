#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class IndividuationPlayTaskStage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "IndividuationPlayTaskStage"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& IndividuationPlayTaskStage_Prepare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& IndividuationPlayTaskStage_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& IndividuationPlayTaskStage_PostPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& IndividuationPlayTaskStage_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& IndividuationPlayTaskStage_Stoped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
