#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKNoticePictureInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKNoticePictureInfo"));
	}

	template <typename T = Il2CppString*> T& noticePicUrl() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& noticePicHashcode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& noticePicTitle() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& noticePicSize() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& screenDir() {
		return *(T*)((uintptr_t)this + 0x18);
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

	template <typename T = Il2CppString*> T get_NoticePicUrl() {
		return ((T (*)(MSDKNoticePictureInfo*))(Il2CppBase() + 0x46D92F4))(this);
	}
	template <typename T = void> T set_NoticePicUrl(Il2CppString* value) {
		return ((T (*)(MSDKNoticePictureInfo*, Il2CppString*))(Il2CppBase() + 0x46D92FC))(this, value);
	}
	template <typename T = Il2CppString*> T get_NoticePicHashcode() {
		return ((T (*)(MSDKNoticePictureInfo*))(Il2CppBase() + 0x46D9304))(this);
	}
	template <typename T = void> T set_NoticePicHashcode(Il2CppString* value) {
		return ((T (*)(MSDKNoticePictureInfo*, Il2CppString*))(Il2CppBase() + 0x46D930C))(this, value);
	}
	template <typename T = Il2CppString*> T get_NoticePicTitle() {
		return ((T (*)(MSDKNoticePictureInfo*))(Il2CppBase() + 0x46D9314))(this);
	}
	template <typename T = void> T set_NoticePicTitle(Il2CppString* value) {
		return ((T (*)(MSDKNoticePictureInfo*, Il2CppString*))(Il2CppBase() + 0x46D931C))(this, value);
	}
	template <typename T = Il2CppString*> T get_NoticePicSize() {
		return ((T (*)(MSDKNoticePictureInfo*))(Il2CppBase() + 0x46D9324))(this);
	}
	template <typename T = void> T set_NoticePicSize(Il2CppString* value) {
		return ((T (*)(MSDKNoticePictureInfo*, Il2CppString*))(Il2CppBase() + 0x46D932C))(this, value);
	}
	template <typename T = int32_t> T get_ScreenDir() {
		return ((T (*)(MSDKNoticePictureInfo*))(Il2CppBase() + 0x46D9334))(this);
	}
	template <typename T = void> T set_ScreenDir(int32_t value) {
		return ((T (*)(MSDKNoticePictureInfo*, int32_t))(Il2CppBase() + 0x46D933C))(this, value);
	}

};

}
