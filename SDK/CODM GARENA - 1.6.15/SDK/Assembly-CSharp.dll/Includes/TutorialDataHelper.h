#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TutorialDataHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TutorialDataHelper"));
	}

	template <typename T = int32_t> static T& MapID_ZM_1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MapID_ZM_2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MapID_ZM_3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MapID_Easy_SPVP_1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MapID_Hard_SPVP_3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MapID_SPM_1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
