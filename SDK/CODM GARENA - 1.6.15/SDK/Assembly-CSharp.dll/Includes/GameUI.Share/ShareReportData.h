#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Share {

class ShareReportData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Share", "ShareReportData"));
	}

	template <typename T = uintptr_t> T& eventID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& shareType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& sharePlatformID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& isShareSuccess() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& gameResultGameMode() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& gameResutlIsWin() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& gameResultSortorder() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& gameResultTeamSortorder() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& rankeID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& rankMode() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& newItemID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& activityType() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& activityID() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReportData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Format() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ShareReportData*))(Il2CppBase() + 0x4479C48))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetReportData() {
		return ((T (*)(ShareReportData*))(Il2CppBase() + 0x449AB00))(this);
	}
	template <typename T = Il2CppString*> T Format() {
		return ((T (*)(ShareReportData*))(Il2CppBase() + 0x449AE00))(this);
	}

};

}
