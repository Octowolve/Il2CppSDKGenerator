#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Core {

class ABSSequentiable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Core", "ABSSequentiable"));
	}

	template <typename T = uintptr_t> T& tweenType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& sequencedPosition() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& sequencedEndPosition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& onStart() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
