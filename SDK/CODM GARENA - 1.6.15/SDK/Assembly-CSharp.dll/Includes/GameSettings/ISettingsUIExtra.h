#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class ISettingsUIExtra
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "ISettingsUIExtra"));
	}


	template <typename T = void> T SetUIPanelDepth(int32_t depth) {
		return ((T (*)(ISettingsUIExtra*, int32_t))(Il2CppBase() + 0x0))(this, depth);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetTabInfoList() {
		return ((T (*)(ISettingsUIExtra*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnInitTabsFinish(uintptr_t message) {
		return ((T (*)(ISettingsUIExtra*, uintptr_t))(Il2CppBase() + 0x0))(this, message);
	}

};

}
