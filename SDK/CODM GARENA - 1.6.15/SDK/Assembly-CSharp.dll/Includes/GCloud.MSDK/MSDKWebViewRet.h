#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKWebViewRet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKWebViewRet"));
	}

	template <typename T = int32_t> T& msgType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& msgJsonData() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& embedProgress() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& embedUrl() {
		return *(T*)((uintptr_t)this + 0x2C);
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

	template <typename T = int32_t> T get_MsgType() {
		return ((T (*)(MSDKWebViewRet*))(Il2CppBase() + 0x46E2BCC))(this);
	}
	template <typename T = void> T set_MsgType(int32_t value) {
		return ((T (*)(MSDKWebViewRet*, int32_t))(Il2CppBase() + 0x46E2BD4))(this, value);
	}
	template <typename T = Il2CppString*> T get_MsgJsonData() {
		return ((T (*)(MSDKWebViewRet*))(Il2CppBase() + 0x46E2BDC))(this);
	}
	template <typename T = void> T set_MsgJsonData(Il2CppString* value) {
		return ((T (*)(MSDKWebViewRet*, Il2CppString*))(Il2CppBase() + 0x46E2BE4))(this, value);
	}
	template <typename T = float> T get_EmbedProgress() {
		return ((T (*)(MSDKWebViewRet*))(Il2CppBase() + 0x46E2BEC))(this);
	}
	template <typename T = void> T set_EmbedProgress(float value) {
		return ((T (*)(MSDKWebViewRet*, float))(Il2CppBase() + 0x46E2BF4))(this, value);
	}
	template <typename T = Il2CppString*> T get_EmbedUrl() {
		return ((T (*)(MSDKWebViewRet*))(Il2CppBase() + 0x46E2BFC))(this);
	}
	template <typename T = void> T set_EmbedUrl(Il2CppString* value) {
		return ((T (*)(MSDKWebViewRet*, Il2CppString*))(Il2CppBase() + 0x46E2C04))(this, value);
	}

};

}
