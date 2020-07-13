#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class ScrollingInfomationModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "ScrollingInfomationModel"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_DataList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_DataList() {
		return ((T (*)(ScrollingInfomationModel*))(Il2CppBase() + 0x2B1BBDC))(this);
	}
	template <typename T = void> T AddData(uintptr_t data) {
		return ((T (*)(ScrollingInfomationModel*, uintptr_t))(Il2CppBase() + 0x2B1CF8C))(this, data);
	}

};

}
