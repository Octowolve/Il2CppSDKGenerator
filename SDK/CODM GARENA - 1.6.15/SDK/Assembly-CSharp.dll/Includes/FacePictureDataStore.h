#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FacePictureDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FacePictureDataStore"));
	}

	template <typename T = uint64_t> T& m_LastLoginPlayerId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_TimesRestrict() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& faceShow() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_TimesTotal() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_MaxLoginNum() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_CurrentLoginNum() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_FacePicList() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_FaceOTOPicList() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFacePicData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FilterFacePicDataJumpToShop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PopupNextFacePicture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GotoActivityAfterFace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PopupRoleShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowOTOPic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordPopupData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNotifyServerList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FacePicConfSort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FacePicTimeShowSequenceSort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FacePicIDSequenceSort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uint64_t> T get_LastLoginPlayerId() {
		return ((T (*)(FacePictureDataStore*))(Il2CppBase() + 0x4BDD8C4))(this);
	}
	template <typename T = int32_t> T get_TimesRestrict() {
		return ((T (*)(FacePictureDataStore*))(Il2CppBase() + 0x4BDE8C0))(this);
	}
	template <typename T = int32_t> T get_TimesTotal() {
		return ((T (*)(FacePictureDataStore*))(Il2CppBase() + 0x4BDE8C8))(this);
	}
	template <typename T = int32_t> T get_MaxLoginTotal() {
		return ((T (*)(FacePictureDataStore*))(Il2CppBase() + 0x4BDE8D0))(this);
	}
	template <typename T = int32_t> T get_CurrentLoginNum() {
		return ((T (*)(FacePictureDataStore*))(Il2CppBase() + 0x4BDE8D8))(this);
	}
	template <typename T = void> T UpdateFacePicData(uintptr_t res) {
		return ((T (*)(FacePictureDataStore*, uintptr_t))(Il2CppBase() + 0x4BDDB34))(this, res);
	}
	template <typename T = void> T FilterFacePicDataJumpToShop(uintptr_t Data) {
		return ((T (*)(FacePictureDataStore*, uintptr_t))(Il2CppBase() + 0x4BDE8E0))(this, Data);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(FacePictureDataStore*))(Il2CppBase() + 0x4BDF0B8))(this);
	}
	template <typename T = uintptr_t> T PopupNextFacePicture(uintptr_t* bNavigation) {
		return ((T (*)(FacePictureDataStore*, uintptr_t*))(Il2CppBase() + 0x4BDF170))(this, bNavigation);
	}
	template <typename T = void> T GotoActivityAfterFace() {
		return ((T (*)(FacePictureDataStore*))(Il2CppBase() + 0x4BE0BE4))(this);
	}
	template <typename T = void> T PopupRoleShow(int32_t index, uintptr_t faceData) {
		return ((T (*)(FacePictureDataStore*, int32_t, uintptr_t))(Il2CppBase() + 0x4BE0988))(this, index, faceData);
	}
	template <typename T = void> T ShowOTOPic() {
		return ((T (*)(FacePictureDataStore*))(Il2CppBase() + 0x4BE0DD4))(this);
	}
	template <typename T = void> T RecordPopupData(int32_t index) {
		return ((T (*)(FacePictureDataStore*, int32_t))(Il2CppBase() + 0x4BE0668))(this, index);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetNotifyServerList() {
		return ((T (*)(FacePictureDataStore*))(Il2CppBase() + 0x4BE1538))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T FacePicConfSort(Il2CppList<uintptr_t>* dataList) {
		return ((T (*)(FacePictureDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4BDEB54))(this, dataList);
	}
	template <typename T = int32_t> T FacePicTimeShowSequenceSort(uintptr_t a, uintptr_t b) {
		return ((T (*)(FacePictureDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BE17CC))(this, a, b);
	}
	template <typename T = int32_t> T FacePicIDSequenceSort(uintptr_t a, uintptr_t b) {
		return ((T (*)(FacePictureDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BE1940))(this, a, b);
	}
	template <typename T = bool> static T FacePicConfSortm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BE1AB4))(0, it);
	}
	template <typename T = bool> static T FacePicConfSortm__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BE1AEC))(0, it);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(FacePictureDataStore*))(Il2CppBase() + 0x4BE1B24))(this);
	}

};

}
