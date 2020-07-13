#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class FtpWebRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "FtpWebRequest"));
	}

	template <typename T = uintptr_t> T& requestUri() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& file_name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& servicePoint() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& origDataStream() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& dataStream() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& controlStream() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& controlReader() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& credentials() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& hostEntry() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& localEndPoint() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& proxy() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& timeout() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& rwTimeout() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int64_t> T& offset() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& binary() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& enableSsl() {
		return *(T*)((uintptr_t)this + 0x51);
	}
	template <typename T = bool> T& usePassive() {
		return *(T*)((uintptr_t)this + 0x52);
	}
	template <typename T = bool> T& keepAlive() {
		return *(T*)((uintptr_t)this + 0x53);
	}
	template <typename T = Il2CppString*> T& method() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& renameTo() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& locker() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& requestState() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& asyncResult() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& ftpResponse() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& requestStream() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppString*> T& initial_path() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& supportedCommands() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& callback() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> static T& f__am$cache1C() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T GetMustImplement() {
		return ((T (*)(void *))(Il2CppBase() + 0x42CD378))(0);
	}
	template <typename T = void> T set_ContentType(Il2CppString* value) {
		return ((T (*)(FtpWebRequest*, Il2CppString*))(Il2CppBase() + 0x42CD404))(this, value);
	}
	template <typename T = int64_t> T get_ContentLength() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42CD498))(this);
	}
	template <typename T = void> T set_ContentLength(int64_t value) {
		return ((T (*)(FtpWebRequest*, int64_t))(Il2CppBase() + 0x42CD4A4))(this, value);
	}
	template <typename T = uintptr_t> T get_Credentials() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42CD4A8))(this);
	}
	template <typename T = void> T set_Credentials(uintptr_t value) {
		return ((T (*)(FtpWebRequest*, uintptr_t))(Il2CppBase() + 0x42CD4B0))(this, value);
	}
	template <typename T = bool> T get_EnableSsl() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42CD6B0))(this);
	}
	template <typename T = uintptr_t> T get_Headers() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42CD6B8))(this);
	}
	template <typename T = void> T set_Headers(uintptr_t value) {
		return ((T (*)(FtpWebRequest*, uintptr_t))(Il2CppBase() + 0x42CD758))(this, value);
	}
	template <typename T = Il2CppString*> T get_Method() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42CD7F8))(this);
	}
	template <typename T = void> T set_Method(Il2CppString* value) {
		return ((T (*)(FtpWebRequest*, Il2CppString*))(Il2CppBase() + 0x42CD800))(this, value);
	}
	template <typename T = uintptr_t> T get_Proxy() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42CD9B0))(this);
	}
	template <typename T = void> T set_Proxy(uintptr_t value) {
		return ((T (*)(FtpWebRequest*, uintptr_t))(Il2CppBase() + 0x42CD9B8))(this, value);
	}
	template <typename T = int32_t> T get_ReadWriteTimeout() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42CBDD4))(this);
	}
	template <typename T = uintptr_t> T get_RequestUri() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42CDA68))(this);
	}
	template <typename T = uintptr_t> T get_ServicePoint() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42CDA70))(this);
	}
	template <typename T = void> T set_Timeout(int32_t value) {
		return ((T (*)(FtpWebRequest*, int32_t))(Il2CppBase() + 0x42CDB38))(this, value);
	}
	template <typename T = Il2CppString*> T get_DataType() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42CDBE8))(this);
	}
	template <typename T = uintptr_t> T get_State() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42CDC78))(this);
	}
	template <typename T = void> T set_State(uintptr_t value) {
		return ((T (*)(FtpWebRequest*, uintptr_t))(Il2CppBase() + 0x42CDCB4))(this, value);
	}
	template <typename T = void> T Abort() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42CDDF8))(this);
	}
	template <typename T = uintptr_t> T BeginGetResponse(uintptr_t callback, uintptr_t state) {
		return ((T (*)(FtpWebRequest*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42CE54C))(this, callback, state);
	}
	template <typename T = uintptr_t> T EndGetResponse(uintptr_t asyncResult) {
		return ((T (*)(FtpWebRequest*, uintptr_t))(Il2CppBase() + 0x42CE800))(this, asyncResult);
	}
	template <typename T = uintptr_t> T GetResponse() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42CE9EC))(this);
	}
	template <typename T = uintptr_t> T BeginGetRequestStream(uintptr_t callback, uintptr_t state) {
		return ((T (*)(FtpWebRequest*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42CEA14))(this, callback, state);
	}
	template <typename T = uintptr_t> T EndGetRequestStream(uintptr_t asyncResult) {
		return ((T (*)(FtpWebRequest*, uintptr_t))(Il2CppBase() + 0x42CEDB0))(this, asyncResult);
	}
	template <typename T = uintptr_t> T GetRequestStream() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42CF044))(this);
	}
	template <typename T = uintptr_t> T GetServicePoint() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42CDA74))(this);
	}
	template <typename T = void> T ResolveHost() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42CF06C))(this);
	}
	template <typename T = void> T ProcessRequest() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42CF248))(this);
	}
	template <typename T = void> T SetType() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42CFF8C))(this);
	}
	template <typename T = Il2CppString*> T GetRemoteFolderPath(uintptr_t uri) {
		return ((T (*)(FtpWebRequest*, uintptr_t))(Il2CppBase() + 0x42D02D8))(this, uri);
	}
	template <typename T = void> T CWDAndSetFileName(uintptr_t uri) {
		return ((T (*)(FtpWebRequest*, uintptr_t))(Il2CppBase() + 0x42D0548))(this, uri);
	}
	template <typename T = void> T ProcessMethod() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42CF610))(this);
	}
	template <typename T = void> T CloseControlConnection() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42D1868))(this);
	}
	template <typename T = void> T CloseDataConnection() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42CB520))(this);
	}
	template <typename T = void> T CloseConnection() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42D1960))(this);
	}
	template <typename T = void> T ProcessSimpleMethod() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42D0E88))(this);
	}
	template <typename T = void> T UploadData() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42D0DAC))(this);
	}
	template <typename T = void> T DownloadData() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42D0CD4))(this);
	}
	template <typename T = void> T CheckRequestStarted() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42CD5D4))(this);
	}
	template <typename T = void> T OpenControlConnection() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42D074C))(this);
	}
	template <typename T = Il2CppString*> static T GetInitialPath(uintptr_t status) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42D25EC))(0, status);
	}
	template <typename T = uintptr_t> T SetupPassiveConnection(Il2CppString* statusDescription) {
		return ((T (*)(FtpWebRequest*, Il2CppString*))(Il2CppBase() + 0x42D28A0))(this, statusDescription);
	}
	template <typename T = uintptr_t> T CreateExceptionFromResponse(uintptr_t status) {
		return ((T (*)(FtpWebRequest*, uintptr_t))(Il2CppBase() + 0x42D0174))(this, status);
	}
	template <typename T = void> T SetTransferCompleted() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42CB554))(this);
	}
	template <typename T = void> T OperationCompleted() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42D2FD0))(this);
	}
	template <typename T = void> T SetCompleteWithError(uintptr_t exc) {
		return ((T (*)(FtpWebRequest*, uintptr_t))(Il2CppBase() + 0x42CFAAC))(this, exc);
	}
	template <typename T = uintptr_t> T InitDataConnection() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42D2FE0))(this);
	}
	template <typename T = void> T OpenDataConnection() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42D19B8))(this);
	}
	template <typename T = void> T Authenticate() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42D1F3C))(this);
	}
	template <typename T = uintptr_t> T SendCommand(Il2CppString* command, Il2CppArray<uintptr_t>* parameters) {
		return ((T (*)(FtpWebRequest*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x42D0150))(this, command, parameters);
	}
	template <typename T = uintptr_t> T SendCommand_1(bool waitResponse, Il2CppString* command, Il2CppArray<uintptr_t>* parameters) {
		return ((T (*)(FtpWebRequest*, bool, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x42CDFD8))(this, waitResponse, command, parameters);
	}
	template <typename T = uintptr_t> static T ServiceNotAvailable() {
		return ((T (*)(void *))(Il2CppBase() + 0x42D3920))(0);
	}
	template <typename T = uintptr_t> T GetResponseStatus() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42CFB30))(this);
	}
	template <typename T = void> T InitiateSecureConnection(uintptr_t stream) {
		return ((T (*)(FtpWebRequest*, uintptr_t))(Il2CppBase() + 0x42D3794))(this, stream);
	}
	template <typename T = bool> T ChangeToSSLSocket(uintptr_t stream) {
		return ((T (*)(FtpWebRequest*, uintptr_t))(Il2CppBase() + 0x42D367C))(this, stream);
	}
	template <typename T = bool> T InFinalState() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42CE30C))(this);
	}
	template <typename T = bool> T InProgress() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42CFADC))(this);
	}
	template <typename T = void> T CheckIfAborted() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42CB440))(this);
	}
	template <typename T = void> T CheckFinalState() {
		return ((T (*)(FtpWebRequest*))(Il2CppBase() + 0x42CDD3C))(this);
	}
	template <typename T = bool> static T callbackm__B(uintptr_t sender, uintptr_t certificate, uintptr_t chain, uintptr_t sslPolicyErrors) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x42D39D8))(0, sender, certificate, chain, sslPolicyErrors);
	}

};

}
