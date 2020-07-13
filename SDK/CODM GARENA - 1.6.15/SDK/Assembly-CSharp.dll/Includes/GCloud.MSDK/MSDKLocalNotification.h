#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKLocalNotification
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKLocalNotification"));
	}

	template <typename T = int32_t> T& type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& actionType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& iconType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& lights() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ring() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& vibrate() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& styleID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& builderID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& content() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& customContent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& activity() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& packageDownloadUrl() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& packageName() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& iconRes() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& date() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& hour() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& intent() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& min() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& title() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& url() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& ringRaw() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& smallIcon() {
		return *(T*)((uintptr_t)this + 0x64);
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
		return ((T (*)(MSDKLocalNotification*))(Il2CppBase() + 0x46CD6E8))(this);
	}
	template <typename T = void> T set_Type(int32_t value) {
		return ((T (*)(MSDKLocalNotification*, int32_t))(Il2CppBase() + 0x46CD6F0))(this, value);
	}
	template <typename T = int32_t> T get_ActionType() {
		return ((T (*)(MSDKLocalNotification*))(Il2CppBase() + 0x46CD6F8))(this);
	}
	template <typename T = void> T set_ActionType(int32_t value) {
		return ((T (*)(MSDKLocalNotification*, int32_t))(Il2CppBase() + 0x46CD700))(this, value);
	}
	template <typename T = int32_t> T get_IconType() {
		return ((T (*)(MSDKLocalNotification*))(Il2CppBase() + 0x46CD708))(this);
	}
	template <typename T = void> T set_IconType(int32_t value) {
		return ((T (*)(MSDKLocalNotification*, int32_t))(Il2CppBase() + 0x46CD710))(this, value);
	}
	template <typename T = int32_t> T get_Lights() {
		return ((T (*)(MSDKLocalNotification*))(Il2CppBase() + 0x46CD718))(this);
	}
	template <typename T = void> T set_Lights(int32_t value) {
		return ((T (*)(MSDKLocalNotification*, int32_t))(Il2CppBase() + 0x46CD720))(this, value);
	}
	template <typename T = int32_t> T get_Ring() {
		return ((T (*)(MSDKLocalNotification*))(Il2CppBase() + 0x46CD728))(this);
	}
	template <typename T = void> T set_Ring(int32_t value) {
		return ((T (*)(MSDKLocalNotification*, int32_t))(Il2CppBase() + 0x46CD730))(this, value);
	}
	template <typename T = int32_t> T get_Vibrate() {
		return ((T (*)(MSDKLocalNotification*))(Il2CppBase() + 0x46CD738))(this);
	}
	template <typename T = void> T set_Vibrate(int32_t value) {
		return ((T (*)(MSDKLocalNotification*, int32_t))(Il2CppBase() + 0x46CD740))(this, value);
	}
	template <typename T = int32_t> T get_StyleId() {
		return ((T (*)(MSDKLocalNotification*))(Il2CppBase() + 0x46CD748))(this);
	}
	template <typename T = void> T set_StyleId(int32_t value) {
		return ((T (*)(MSDKLocalNotification*, int32_t))(Il2CppBase() + 0x46CD750))(this, value);
	}
	template <typename T = int64_t> T get_BuilderId() {
		return ((T (*)(MSDKLocalNotification*))(Il2CppBase() + 0x46CD758))(this);
	}
	template <typename T = void> T set_BuilderId(int64_t value) {
		return ((T (*)(MSDKLocalNotification*, int64_t))(Il2CppBase() + 0x46CD760))(this, value);
	}
	template <typename T = Il2CppString*> T get_Content() {
		return ((T (*)(MSDKLocalNotification*))(Il2CppBase() + 0x46CD770))(this);
	}
	template <typename T = void> T set_Content(Il2CppString* value) {
		return ((T (*)(MSDKLocalNotification*, Il2CppString*))(Il2CppBase() + 0x46CD778))(this, value);
	}
	template <typename T = Il2CppString*> T get_CustomContent() {
		return ((T (*)(MSDKLocalNotification*))(Il2CppBase() + 0x46CD780))(this);
	}
	template <typename T = void> T set_CustomContent(Il2CppString* value) {
		return ((T (*)(MSDKLocalNotification*, Il2CppString*))(Il2CppBase() + 0x46CD788))(this, value);
	}
	template <typename T = Il2CppString*> T get_Activity() {
		return ((T (*)(MSDKLocalNotification*))(Il2CppBase() + 0x46CD790))(this);
	}
	template <typename T = void> T set_Activity(Il2CppString* value) {
		return ((T (*)(MSDKLocalNotification*, Il2CppString*))(Il2CppBase() + 0x46CD798))(this, value);
	}
	template <typename T = Il2CppString*> T get_PackageDownloadUrl() {
		return ((T (*)(MSDKLocalNotification*))(Il2CppBase() + 0x46CD7A0))(this);
	}
	template <typename T = void> T set_PackageDownloadUrl(Il2CppString* value) {
		return ((T (*)(MSDKLocalNotification*, Il2CppString*))(Il2CppBase() + 0x46CD7A8))(this, value);
	}
	template <typename T = Il2CppString*> T get_PackageName() {
		return ((T (*)(MSDKLocalNotification*))(Il2CppBase() + 0x46CD7B0))(this);
	}
	template <typename T = void> T set_PackageName(Il2CppString* value) {
		return ((T (*)(MSDKLocalNotification*, Il2CppString*))(Il2CppBase() + 0x46CD7B8))(this, value);
	}
	template <typename T = Il2CppString*> T get_IconRes() {
		return ((T (*)(MSDKLocalNotification*))(Il2CppBase() + 0x46CD7C0))(this);
	}
	template <typename T = void> T set_IconRes(Il2CppString* value) {
		return ((T (*)(MSDKLocalNotification*, Il2CppString*))(Il2CppBase() + 0x46CD7C8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Date() {
		return ((T (*)(MSDKLocalNotification*))(Il2CppBase() + 0x46CD7D0))(this);
	}
	template <typename T = void> T set_Date(Il2CppString* value) {
		return ((T (*)(MSDKLocalNotification*, Il2CppString*))(Il2CppBase() + 0x46CD7D8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Hour() {
		return ((T (*)(MSDKLocalNotification*))(Il2CppBase() + 0x46CD7E0))(this);
	}
	template <typename T = void> T set_Hour(Il2CppString* value) {
		return ((T (*)(MSDKLocalNotification*, Il2CppString*))(Il2CppBase() + 0x46CD7E8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Intent() {
		return ((T (*)(MSDKLocalNotification*))(Il2CppBase() + 0x46CD7F0))(this);
	}
	template <typename T = void> T set_Intent(Il2CppString* value) {
		return ((T (*)(MSDKLocalNotification*, Il2CppString*))(Il2CppBase() + 0x46CD7F8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Min() {
		return ((T (*)(MSDKLocalNotification*))(Il2CppBase() + 0x46CD800))(this);
	}
	template <typename T = void> T set_Min(Il2CppString* value) {
		return ((T (*)(MSDKLocalNotification*, Il2CppString*))(Il2CppBase() + 0x46CD808))(this, value);
	}
	template <typename T = Il2CppString*> T get_Title() {
		return ((T (*)(MSDKLocalNotification*))(Il2CppBase() + 0x46CD810))(this);
	}
	template <typename T = void> T set_Title(Il2CppString* value) {
		return ((T (*)(MSDKLocalNotification*, Il2CppString*))(Il2CppBase() + 0x46CD818))(this, value);
	}
	template <typename T = Il2CppString*> T get_Url() {
		return ((T (*)(MSDKLocalNotification*))(Il2CppBase() + 0x46CD820))(this);
	}
	template <typename T = void> T set_Url(Il2CppString* value) {
		return ((T (*)(MSDKLocalNotification*, Il2CppString*))(Il2CppBase() + 0x46CD828))(this, value);
	}
	template <typename T = Il2CppString*> T get_RingRaw() {
		return ((T (*)(MSDKLocalNotification*))(Il2CppBase() + 0x46CD830))(this);
	}
	template <typename T = void> T set_RingRaw(Il2CppString* value) {
		return ((T (*)(MSDKLocalNotification*, Il2CppString*))(Il2CppBase() + 0x46CD838))(this, value);
	}
	template <typename T = Il2CppString*> T get_SmallIcon() {
		return ((T (*)(MSDKLocalNotification*))(Il2CppBase() + 0x46CD840))(this);
	}
	template <typename T = void> T set_SmallIcon(Il2CppString* value) {
		return ((T (*)(MSDKLocalNotification*, Il2CppString*))(Il2CppBase() + 0x46CD848))(this, value);
	}

};

}
