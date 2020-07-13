#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace CareerInfo {

class PersonalInfoMainView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CareerInfo", "PersonalInfoMainView"));
	}

	template <typename T = uintptr_t> T& gameTypeSelector() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& NewFrameRedBox() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& CreditScoreBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRedPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelRedPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGameTagState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init() {
		return ((T (*)(PersonalInfoMainView*))(Il2CppBase() + 0x1D110BC))(this);
	}
	template <typename T = void> T SetRedPoint() {
		return ((T (*)(PersonalInfoMainView*))(Il2CppBase() + 0x1D0E350))(this);
	}
	template <typename T = void> T CancelRedPoint(int32_t index) {
		return ((T (*)(PersonalInfoMainView*, int32_t))(Il2CppBase() + 0x1D0FBDC))(this, index);
	}
	template <typename T = void> T SetGameTagState() {
		return ((T (*)(PersonalInfoMainView*))(Il2CppBase() + 0x1D0E680))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PersonalInfoMainView*))(Il2CppBase() + 0x1D11264))(this);
	}

};

}
