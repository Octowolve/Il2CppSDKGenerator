#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class IndividuationPlayAnimationInstancePlayType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "IndividuationPlayAnimationInstance_PlayType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& IndividuationPlayTaskStage_Normal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& IndividuationPlayTaskStage_SnowMan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& IndividuationPlayTaskStage_ChrismasTree() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& IndividuationPlayTaskStage_Head() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& IndividuationPlayTaskStage_Nunchucks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& IndividuationPlayTaskStage_Loop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& IndividuationPlayTaskStage_CrackingSkull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
