#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProVideo {

class HLSStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RenderHeads.Media.AVProVideo", "HLSStream"));
	}

	template <typename T = Il2CppString*> static T& BANDWITH_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& RESOLUTION_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CHUNK_TAG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STREAM_TAG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _streams() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _chunks() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& _streamURL() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _width() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _height() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _bandwidth() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllChunks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChunks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllStreams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStreams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExtractStreamInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsChunk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MyRemoteCertificateValidationCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = int32_t> T get_Width() {
		return ((T (*)(HLSStream*))(Il2CppBase() + 0x41133C4))(this);
	}
	template <typename T = int32_t> T get_Height() {
		return ((T (*)(HLSStream*))(Il2CppBase() + 0x41133CC))(this);
	}
	template <typename T = int32_t> T get_Bandwidth() {
		return ((T (*)(HLSStream*))(Il2CppBase() + 0x41133D4))(this);
	}
	template <typename T = Il2CppString*> T get_URL() {
		return ((T (*)(HLSStream*))(Il2CppBase() + 0x41133DC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAllChunks() {
		return ((T (*)(HLSStream*))(Il2CppBase() + 0x41133E4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetChunks() {
		return ((T (*)(HLSStream*))(Il2CppBase() + 0x41135CC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAllStreams() {
		return ((T (*)(HLSStream*))(Il2CppBase() + 0x411366C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetStreams() {
		return ((T (*)(HLSStream*))(Il2CppBase() + 0x4113854))(this);
	}
	template <typename T = bool> T ExtractStreamInfo(Il2CppString* line, uintptr_t width, uintptr_t height, uintptr_t bandwidth) {
		return ((T (*)(HLSStream*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x41138F4))(this, line, width, height, bandwidth);
	}
	template <typename T = bool> static T IsChunk(Il2CppString* line) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4113D44))(0, line);
	}
	template <typename T = void> T ParseFile(Il2CppArray<uintptr_t>* text, Il2CppString* path) {
		return ((T (*)(HLSStream*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x4112C74))(this, text, path);
	}
	template <typename T = bool> T MyRemoteCertificateValidationCallback(uintptr_t sender, uintptr_t certificate, uintptr_t chain, uintptr_t sslPolicyErrors) {
		return ((T (*)(HLSStream*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4113E1C))(this, sender, certificate, chain, sslPolicyErrors);
	}

};

}
