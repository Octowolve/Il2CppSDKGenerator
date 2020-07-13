#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKFriendReqInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKFriendReqInfo"));
	}

	template <typename T = int32_t> T& type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& user() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& title() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& desc() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& imagePath() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& thumbPath() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& mediaPath() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& link() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& extraJson() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix2_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T get_Type() {
		return ((T (*)(MSDKFriendReqInfo*))(Il2CppBase() + 0x46C2E10))(this);
	}
	template <typename T = void> T set_Type(int32_t value) {
		return ((T (*)(MSDKFriendReqInfo*, int32_t))(Il2CppBase() + 0x46C2E18))(this, value);
	}
	template <typename T = Il2CppString*> T get_User() {
		return ((T (*)(MSDKFriendReqInfo*))(Il2CppBase() + 0x46C2E20))(this);
	}
	template <typename T = void> T set_User(Il2CppString* value) {
		return ((T (*)(MSDKFriendReqInfo*, Il2CppString*))(Il2CppBase() + 0x46C2E28))(this, value);
	}
	template <typename T = Il2CppString*> T get_Title() {
		return ((T (*)(MSDKFriendReqInfo*))(Il2CppBase() + 0x46C2E30))(this);
	}
	template <typename T = void> T set_Title(Il2CppString* value) {
		return ((T (*)(MSDKFriendReqInfo*, Il2CppString*))(Il2CppBase() + 0x46C2E38))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(MSDKFriendReqInfo*))(Il2CppBase() + 0x46C2E40))(this);
	}
	template <typename T = void> T set_Desc(Il2CppString* value) {
		return ((T (*)(MSDKFriendReqInfo*, Il2CppString*))(Il2CppBase() + 0x46C2E48))(this, value);
	}
	template <typename T = Il2CppString*> T get_ImagePath() {
		return ((T (*)(MSDKFriendReqInfo*))(Il2CppBase() + 0x46C2E50))(this);
	}
	template <typename T = void> T set_ImagePath(Il2CppString* value) {
		return ((T (*)(MSDKFriendReqInfo*, Il2CppString*))(Il2CppBase() + 0x46C2E58))(this, value);
	}
	template <typename T = Il2CppString*> T get_ThumbPath() {
		return ((T (*)(MSDKFriendReqInfo*))(Il2CppBase() + 0x46C2E60))(this);
	}
	template <typename T = void> T set_ThumbPath(Il2CppString* value) {
		return ((T (*)(MSDKFriendReqInfo*, Il2CppString*))(Il2CppBase() + 0x46C2E68))(this, value);
	}
	template <typename T = Il2CppString*> T get_MediaPath() {
		return ((T (*)(MSDKFriendReqInfo*))(Il2CppBase() + 0x46C2E70))(this);
	}
	template <typename T = void> T set_MediaPath(Il2CppString* value) {
		return ((T (*)(MSDKFriendReqInfo*, Il2CppString*))(Il2CppBase() + 0x46C2E78))(this, value);
	}
	template <typename T = Il2CppString*> T get_Link() {
		return ((T (*)(MSDKFriendReqInfo*))(Il2CppBase() + 0x46C2E80))(this);
	}
	template <typename T = void> T set_Link(Il2CppString* value) {
		return ((T (*)(MSDKFriendReqInfo*, Il2CppString*))(Il2CppBase() + 0x46C2E88))(this, value);
	}
	template <typename T = Il2CppString*> T get_ExtraJson() {
		return ((T (*)(MSDKFriendReqInfo*))(Il2CppBase() + 0x46C2E90))(this);
	}
	template <typename T = void> T set_ExtraJson(Il2CppString* value) {
		return ((T (*)(MSDKFriendReqInfo*, Il2CppString*))(Il2CppBase() + 0x46C2E98))(this, value);
	}

};

}
