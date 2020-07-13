#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class FeedbackView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "FeedbackView"));
	}

	template <typename T = uintptr_t> T& Win() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Fail() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetResult(uintptr_t result) {
		return ((T (*)(FeedbackView*, uintptr_t))(Il2CppBase() + 0x470DBB8))(this, result);
	}

};

}
