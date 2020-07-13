#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins.Core {

class IPlugSetter4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins.Core", "IPlugSetter`4"));
	}


	template <typename T = void*> T Getter() {
		return ((T (*)(IPlugSetter4*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void*> T Setter() {
		return ((T (*)(IPlugSetter4*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T EndValue() {
		return ((T (*)(IPlugSetter4*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetOptions() {
		return ((T (*)(IPlugSetter4*))(Il2CppBase() + 0x0))(this);
	}

};

}
