#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class AnnouncementClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "AnnouncementClient"));
	}

	template <typename T = int32_t> T& m_Id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_IntervalTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_Label() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& m_LanguageCode() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& m_NeedPush() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& m_ActivityStartDate() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& m_ActivityEndDate() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& m_StartDate() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& m_EndDate() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& m_Content() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& m_Pic() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& m_PicUrl() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& m_ShowPic() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& m_ShowPicUrl() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& m_Priority() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& m_Tab() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& m_Title() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& m_ShowInds() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_Type() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_SubscribeType() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ActionUrl() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T get_Id() {
		return ((T (*)(AnnouncementClient*))(Il2CppBase() + 0x4941048))(this);
	}
	template <typename T = int32_t> T get_IntervalTime() {
		return ((T (*)(AnnouncementClient*))(Il2CppBase() + 0x4941050))(this);
	}
	template <typename T = int32_t> T get_Label() {
		return ((T (*)(AnnouncementClient*))(Il2CppBase() + 0x4941058))(this);
	}
	template <typename T = uint32_t> T get_LanguageCode() {
		return ((T (*)(AnnouncementClient*))(Il2CppBase() + 0x4941060))(this);
	}
	template <typename T = uint32_t> T get_NeedPush() {
		return ((T (*)(AnnouncementClient*))(Il2CppBase() + 0x4941068))(this);
	}
	template <typename T = uint32_t> T get_ActivityStartDate() {
		return ((T (*)(AnnouncementClient*))(Il2CppBase() + 0x4941070))(this);
	}
	template <typename T = uint32_t> T get_ActivityEndData() {
		return ((T (*)(AnnouncementClient*))(Il2CppBase() + 0x4941078))(this);
	}
	template <typename T = uint32_t> T get_StartDate() {
		return ((T (*)(AnnouncementClient*))(Il2CppBase() + 0x4941080))(this);
	}
	template <typename T = uint32_t> T get_EndDate() {
		return ((T (*)(AnnouncementClient*))(Il2CppBase() + 0x4941088))(this);
	}
	template <typename T = Il2CppString*> T get_Content() {
		return ((T (*)(AnnouncementClient*))(Il2CppBase() + 0x4941090))(this);
	}
	template <typename T = Il2CppString*> T get_Pic() {
		return ((T (*)(AnnouncementClient*))(Il2CppBase() + 0x4941098))(this);
	}
	template <typename T = Il2CppString*> T get_PicUrl() {
		return ((T (*)(AnnouncementClient*))(Il2CppBase() + 0x49410A0))(this);
	}
	template <typename T = Il2CppString*> T get_ShowPic() {
		return ((T (*)(AnnouncementClient*))(Il2CppBase() + 0x49410A8))(this);
	}
	template <typename T = Il2CppString*> T get_ShowPicUrl() {
		return ((T (*)(AnnouncementClient*))(Il2CppBase() + 0x49410B0))(this);
	}
	template <typename T = int32_t> T get_Priority() {
		return ((T (*)(AnnouncementClient*))(Il2CppBase() + 0x49410B8))(this);
	}
	template <typename T = Il2CppString*> T get_Tab() {
		return ((T (*)(AnnouncementClient*))(Il2CppBase() + 0x49410C0))(this);
	}
	template <typename T = Il2CppString*> T get_Title() {
		return ((T (*)(AnnouncementClient*))(Il2CppBase() + 0x49410C8))(this);
	}
	template <typename T = uint32_t> T get_ShowInds() {
		return ((T (*)(AnnouncementClient*))(Il2CppBase() + 0x49410D0))(this);
	}
	template <typename T = int32_t> T get_Type() {
		return ((T (*)(AnnouncementClient*))(Il2CppBase() + 0x49410D8))(this);
	}
	template <typename T = int32_t> T get_SubscribeType() {
		return ((T (*)(AnnouncementClient*))(Il2CppBase() + 0x49410E0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ActionUrl() {
		return ((T (*)(AnnouncementClient*))(Il2CppBase() + 0x49410E8))(this);
	}
	template <typename T = void> T UpdateData(uintptr_t data, int32_t type) {
		return ((T (*)(AnnouncementClient*, uintptr_t, int32_t))(Il2CppBase() + 0x49410F0))(this, data, type);
	}
	template <typename T = bool> T IsValid(double serverTime) {
		return ((T (*)(AnnouncementClient*, double))(Il2CppBase() + 0x4941D00))(this, serverTime);
	}

};

}
