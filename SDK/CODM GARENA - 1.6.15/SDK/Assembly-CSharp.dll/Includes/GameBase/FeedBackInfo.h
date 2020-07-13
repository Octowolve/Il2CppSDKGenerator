#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class FeedBackInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "FeedBackInfo"));
	}

	template <typename T = Il2CppString*> T& iconName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& feedbackName() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppString*> T& feedbackSound() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
