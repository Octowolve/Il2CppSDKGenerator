#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Report {

class ReportWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Report", "ReportWindowView"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Items() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& UserInput() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& Cancel() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& Confirm() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& UIDLabel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& PlayerReported() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& CharacterLimit() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppString*> T& DefaultTips() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppDictionary<uint64_t, Il2CppString*>*> T& UserInputCacheDic() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CharacterValidate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CacheUserInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReinitReportView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init() {
		return ((T (*)(ReportWindowView*))(Il2CppBase() + 0x3AC25F0))(this);
	}
	template <typename T = char> T CharacterValidate(Il2CppString* text, int32_t charIndex, char addedChar) {
		return ((T (*)(ReportWindowView*, Il2CppString*, int32_t, char))(Il2CppBase() + 0x3AC276C))(this, text, charIndex, addedChar);
	}
	template <typename T = void> T InitItems(Il2CppList<uintptr_t>* ReportIds) {
		return ((T (*)(ReportWindowView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3AC1C78))(this, ReportIds);
	}
	template <typename T = void> T CacheUserInput() {
		return ((T (*)(ReportWindowView*))(Il2CppBase() + 0x3AC28C4))(this);
	}
	template <typename T = void> T ReinitReportView() {
		return ((T (*)(ReportWindowView*))(Il2CppBase() + 0x3AC2AF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ReportWindowView*))(Il2CppBase() + 0x3AC3060))(this);
	}

};

}
