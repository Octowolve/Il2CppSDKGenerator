#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class FtpWebResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "FtpWebResponse"));
	}

	template <typename T = uintptr_t> T& stream() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& uri() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& statusCode() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& lastModified() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& bannerMessage() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& welcomeMessage() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& exitMessage() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& statusDescription() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& method() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& disposed() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& request() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int64_t> T& contentLength() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = int64_t> T get_ContentLength() {
		return ((T (*)(FtpWebResponse*))(Il2CppBase() + 0x42D3BD0))(this);
	}
	template <typename T = uintptr_t> T get_Headers() {
		return ((T (*)(FtpWebResponse*))(Il2CppBase() + 0x42D3BD8))(this);
	}
	template <typename T = uintptr_t> T get_ResponseUri() {
		return ((T (*)(FtpWebResponse*))(Il2CppBase() + 0x42D3C64))(this);
	}
	template <typename T = void> T set_LastModified(uintptr_t value) {
		return ((T (*)(FtpWebResponse*, uintptr_t))(Il2CppBase() + 0x42D19A0))(this, value);
	}
	template <typename T = void> T set_BannerMessage(Il2CppString* value) {
		return ((T (*)(FtpWebResponse*, Il2CppString*))(Il2CppBase() + 0x42D378C))(this, value);
	}
	template <typename T = void> T set_WelcomeMessage(Il2CppString* value) {
		return ((T (*)(FtpWebResponse*, Il2CppString*))(Il2CppBase() + 0x42D3918))(this, value);
	}
	template <typename T = void> T Close() {
		return ((T (*)(FtpWebResponse*))(Il2CppBase() + 0x42D3C6C))(this);
	}
	template <typename T = uintptr_t> T GetResponseStream() {
		return ((T (*)(FtpWebResponse*))(Il2CppBase() + 0x42D3D88))(this);
	}
	template <typename T = void> T set_Stream(uintptr_t value) {
		return ((T (*)(FtpWebResponse*, uintptr_t))(Il2CppBase() + 0x42D1998))(this, value);
	}
	template <typename T = void> T UpdateStatus(uintptr_t status) {
		return ((T (*)(FtpWebResponse*, uintptr_t))(Il2CppBase() + 0x42CF21C))(this, status);
	}
	template <typename T = void> T CheckDisposed() {
		return ((T (*)(FtpWebResponse*))(Il2CppBase() + 0x42D3F2C))(this);
	}
	template <typename T = bool> T IsFinal() {
		return ((T (*)(FtpWebResponse*))(Il2CppBase() + 0x42CFF78))(this);
	}

};

}
