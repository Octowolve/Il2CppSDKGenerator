#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Report {

class CommonReportWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Report", "CommonReportWindowView"));
	}

	template <typename T = uintptr_t> T& LabelPlayerName() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetName(Il2CppString* name) {
		return ((T (*)(CommonReportWindowView*, Il2CppString*))(Il2CppBase() + 0x3AC1818))(this, name);
	}

};

}
