#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins.Options {

class UintOptions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins.Options", "UintOptions"));
	}

	template <typename T = bool> T& isNegativeChangeValue() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(UintOptions*))(Il2CppBase() + 0x44B5FBC))(this);
	}

};

}
