#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins.Options {

class NoOptions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins.Options", "NoOptions"));
	}


	template <typename T = void> T Reset() {
		return ((T (*)(NoOptions*))(Il2CppBase() + 0x44B5BC4))(this);
	}

};

}
