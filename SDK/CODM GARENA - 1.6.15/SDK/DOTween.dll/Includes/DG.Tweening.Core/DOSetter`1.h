#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Core {

class DOSetter1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Core", "DOSetter`1"));
	}


	template <typename T = void> T Invoke(uintptr_t pNewValue) {
		return ((T (*)(DOSetter1*, uintptr_t))(Il2CppBase() + 0x473710C))(this, pNewValue);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t pNewValue, uintptr_t callback, uintptr_t object) {
		return ((T (*)(DOSetter1*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x47371A4))(this, pNewValue, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(DOSetter1*, uintptr_t))(Il2CppBase() + 0x47371D0))(this, result);
	}

};

}
