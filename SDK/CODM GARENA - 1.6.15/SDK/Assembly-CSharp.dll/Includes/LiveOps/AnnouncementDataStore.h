#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class AnnouncementDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "AnnouncementDataStore"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_AnnouncementList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_SubscribeAnnouncementList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAnnouncementDataValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAnnouncement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSubscribeAnnouncement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLeftTabIItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnnouncementById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = bool> T IsAnnouncementDataValid() {
		return ((T (*)(AnnouncementDataStore*))(Il2CppBase() + 0x4941EE4))(this);
	}
	template <typename T = void> T UpdateAnnouncement(uintptr_t res) {
		return ((T (*)(AnnouncementDataStore*, uintptr_t))(Il2CppBase() + 0x49420B4))(this, res);
	}
	template <typename T = void> T UpdateSubscribeAnnouncement(uintptr_t res) {
		return ((T (*)(AnnouncementDataStore*, uintptr_t))(Il2CppBase() + 0x494239C))(this, res);
	}
	template <typename T = bool> T GetLeftTabIItems(uintptr_t leftTabList, uintptr_t selectIndex) {
		return ((T (*)(AnnouncementDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4942684))(this, leftTabList, selectIndex);
	}
	template <typename T = uintptr_t> T GetAnnouncementById(int32_t id) {
		return ((T (*)(AnnouncementDataStore*, int32_t))(Il2CppBase() + 0x4942DC0))(this, id);
	}
	template <typename T = bool> static T UpdateAnnouncementm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4942F38))(0, it);
	}
	template <typename T = bool> static T UpdateSubscribeAnnouncementm__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4942F64))(0, it);
	}
	template <typename T = int32_t> static T GetLeftTabIItemsm__2(uintptr_t l1, uintptr_t l2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4942F94))(0, l1, l2);
	}

};

}
