#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PersonalInfo {

class PersonalInfoMainUIView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PersonalInfo", "PersonalInfoMainUIView"));
	}

	template <typename T = uintptr_t> T& m_Container() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_Background() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetViewSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T ResetViewSize(int32_t width, int32_t height) {
		return ((T (*)(PersonalInfoMainUIView*, int32_t, int32_t))(Il2CppBase() + 0x3F08060))(this, width, height);
	}

};

}
