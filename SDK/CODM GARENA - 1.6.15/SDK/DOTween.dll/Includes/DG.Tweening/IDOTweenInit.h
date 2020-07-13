#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening {

class IDOTweenInit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening", "IDOTweenInit"));
	}


	template <typename T = uintptr_t> T SetCapacity(int32_t tweenersCapacity, int32_t sequencesCapacity) {
		return ((T (*)(IDOTweenInit*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, tweenersCapacity, sequencesCapacity);
	}

};

}
