#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins.Options {

class IPlugOptions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins.Options", "IPlugOptions"));
	}


	template <typename T = void> T Reset() {
		return ((T (*)(IPlugOptions*))(Il2CppBase() + 0x0))(this);
	}

};

}
