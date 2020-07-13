#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class NewGuideGoto
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "NewGuideGoto"));
	}

	template <typename T = int32_t> T& m_GotoIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Start() {
		return ((T (*)(NewGuideGoto*))(Il2CppBase() + 0x43642AC))(this);
	}

};

}
